#include <EEPROM.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 20, 4);

// Parámetros del Encoder
const int salida_A = 2;    // CLK 
const int salida_B = 3;    // DT
const int swPin  = 4;      // SW

// Menús
String menu_principal[] = {"RPM","Temperatura","Tiempo"};  
int sizemenu_principal = sizeof(menu_principal) / sizeof(menu_principal[0]);

String menu_opciones[] = {"Cambiar valor","Regresar"};  
int sizemenu_opciones = sizeof(menu_opciones) / sizeof(menu_opciones[0]);

// Variables
int contador = 0; 
int A_estado_actual;
int A_ultimo_estado;
bool btnpress = false;
int level_menu = 0;

byte flecha[] = {B10000,B11000,B11100,B11110,B11100,B11000,B10000,B00000};

void setup() {
  Serial.begin(9600);
  pinMode (salida_A,INPUT);
  pinMode (salida_B,INPUT);
  pinMode (swPin,INPUT_PULLUP);
  lcd.init();
  lcd.backlight();
  lcd.createChar(0, flecha);              
  fn_menu(contador, menu_principal, sizemenu_principal); 
  A_ultimo_estado = digitalRead(salida_A); 
}

void loop() {
  selectOption();

  // Menú principal con "RPM", "Temperatura" y "Tiempo"
  if (level_menu == 0) { 
    if (fn_encoder(sizemenu_principal)) { 
      fn_menu(contador, menu_principal, sizemenu_principal);
    }
    
    if (btnpress) { 
      if (contador < sizemenu_principal) { 
        contador = 0;                   
        fn_menu(contador, menu_opciones, sizemenu_opciones);
        level_menu = 1;                  
      }
      btnpress = false; 
    }
  }
  
  // Submenú de opciones con "Cambiar valor" y "Regresar"
  if (level_menu == 1) {
    if (fn_encoder(sizemenu_opciones)) {
      fn_menu(contador, menu_opciones, sizemenu_opciones);
    }

    if (btnpress) {
      if (contador == 0) { 
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Cambiar valor de ");
        lcd.print(menu_principal[level_menu - 1]);
        delay(2000);
        fn_menu(contador, menu_opciones, sizemenu_opciones);
      }

      if (contador == 1) { 
        contador = 0;
        fn_menu(contador, menu_principal, sizemenu_principal);
        level_menu = 0;
      }
      btnpress = false;
    }
  }
}

void selectOption() {
  if (digitalRead(swPin) == LOW) {
    delay(500);
    btnpress = true;
  }
}

void fn_menu(int pos, String menus[], byte sizemenu) {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.write(byte(0));
  lcd.print(menus[pos]);

  if (pos + 1 < sizemenu) {
    lcd.setCursor(1, 1);
    lcd.print(menus[pos + 1]);
  }
}

bool fn_encoder(byte sizemenu) { 
  bool retorno = false;
  A_estado_actual = digitalRead(salida_A);

  if (A_estado_actual != A_ultimo_estado) {     
    if (digitalRead(salida_B) != A_estado_actual) {
      contador++;
    } else {
      contador--;
    }
    
    if (contador < 0) contador = 0;
    if (contador >= sizemenu) contador = sizemenu - 1;
    retorno = true;
  } 
  A_ultimo_estado = A_estado_actual;
  return retorno; 
}
