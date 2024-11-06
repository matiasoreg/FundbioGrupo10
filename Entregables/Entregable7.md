![muro_frontal_E7_page-0001](https://github.com/user-attachments/assets/a07cfc1b-c9e6-420d-abd3-711c77e1ce2d)# Hardware electrónico
### LCD y Sensor de Temperatura
![prototipado_LCD](https://github.com/user-attachments/assets/5c7687b3-6e03-4695-8bda-d521105559dd)

https://github.com/user-attachments/assets/03df11b3-7c7c-46ab-964a-bb1c7d8dc737
### Buzzer


https://github.com/user-attachments/assets/1fe40445-0a14-4136-b8a0-4d516bd74800




# Software
```
#include <EEPROM.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <OneWire.h>                
#include <DallasTemperature.h>

LiquidCrystal_I2C lcd(0x27, 20, 4); // Configura tu dirección del LCD y el tamaño
OneWire ourWire(8); // Se establece el pin 8 como bus OneWire
DallasTemperature sensors(&ourWire); // Se declara una variable para nuestro sensor

// Parámetros del Encoder
const int salida_A = 2;    // CLK 
const int salida_B = 3;    // DT
const int swPin  = 4;      // SW

// Buzzer
const int buzzerPin = 5;   // Define el pin donde está conectado el buzzer

// Menús
String menu_principal[] = {"RPM", "Temperatura", "Tiempo", "Iniciar"};  
int sizemenu_principal = sizeof(menu_principal) / sizeof(menu_principal[0]);

String menu_opciones[] = {"Ingresar RPM", "Regresar"};  
int sizemenu_opciones = sizeof(menu_opciones) / sizeof(menu_opciones[0]);

String menu_temperatura[] = {"Medir Temperatura", "Regresar"};  
int sizemenu_temperatura = sizeof(menu_temperatura) / sizeof(menu_temperatura[0]);

String menu_tiempo[] = {"Ingresar Minutos", "Regresar"};
int sizemenu_tiempo = sizeof(menu_tiempo) / sizeof(menu_tiempo[0]);

// Variables
int contador = 0; 
int A_estado_actual;
int A_ultimo_estado;
bool btnpress = false;
int level_menu = 0;
int enteredMinutes = 0; // Minutos ingresados en el temporizador
int remainingTime = 0; // Tiempo restante en segundos
int enteredRPM = 0; // RPM ingresadas

byte flecha[] = {B10000,B11000,B11100,B11110,B11100,B11000,B10000,B00000};

// Declaración de funciones
void fn_menu(int pos, String menus[], byte sizemenu);
bool fn_encoder(byte sizemenu);
void selectOption();

void setup() {
  Serial.begin(9600);
  pinMode(salida_A, INPUT);
  pinMode(salida_B, INPUT);
  pinMode(swPin, INPUT_PULLUP);
  pinMode(buzzerPin, OUTPUT); // Configura el pin del buzzer como salida
  lcd.init();
  lcd.backlight();
  lcd.createChar(0, flecha);              
  fn_menu(contador, menu_principal, sizemenu_principal); 
  A_ultimo_estado = digitalRead(salida_A);
  sensors.begin(); // Inicia el sensor de temperatura
}

void loop() {
  selectOption();

  // Menú principal con "RPM", "Temperatura", "Tiempo" y "Iniciar"
  if (level_menu == 0) { 
    if (fn_encoder(sizemenu_principal)) { 
      fn_menu(contador, menu_principal, sizemenu_principal);
    }
    
    if (btnpress) { 
      if (contador < sizemenu_principal) { 
        if (contador == 0) { // Si se selecciona "RPM"
          contador = 0; // Resetea el contador para el submenú de RPM
          fn_menu(contador, menu_opciones, sizemenu_opciones);
          level_menu = 1; // Cambia al nivel de menú de opciones
        } else if (contador == 1) { // Si se selecciona "Temperatura"
          contador = 0; // Resetea el contador para el submenú de temperatura
          fn_menu(contador, menu_temperatura, sizemenu_temperatura);
          level_menu = 2; // Cambia al nivel de menú de temperatura
        } else if (contador == 2) { // Si se selecciona "Tiempo"
          contador = 0; // Resetea el contador para el submenú de tiempo
          fn_menu(contador, menu_tiempo, sizemenu_tiempo);
          level_menu = 3; // Cambia al nivel de menú de tiempo
        } else if (contador == 3) { // Si se selecciona "Iniciar"
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("Iniciando...");
          lcd.setCursor(0, 1);
          lcd.print("Tiempo: ");
          lcd.print(enteredMinutes);
          lcd.setCursor(0, 2);
          lcd.print("RPM: ");
          lcd.print(enteredRPM); // Muestra las RPM ingresadas
          delay(2000);
          // Lógica para iniciar el temporizador
          remainingTime = enteredMinutes * 60; // Convertir minutos a segundos
          while (remainingTime > 0) {
            lcd.setCursor(0, 0);
            lcd.print("Tiempo Restante: ");
            lcd.setCursor(0, 1);
            lcd.print(remainingTime / 60);
            lcd.print(" min ");
            lcd.print(remainingTime % 60);
            lcd.print(" seg ");
            delay(1000);
            remainingTime--;
          }

          // Sonar el buzzer al finalizar el temporizador
          digitalWrite(buzzerPin, HIGH); // Activa el buzzer
          delay(3000); // Mantén el buzzer encendido por 3 segundos
          digitalWrite(buzzerPin, LOW); // Apaga el buzzer

          contador = 0;
          fn_menu(contador, menu_principal, sizemenu_principal);
        }
      }
      btnpress = false; 
    }
  }
  // Submenú de opciones con "Ingresar RPM" y "Regresar"
  if (level_menu == 1) {
    if (fn_encoder(sizemenu_opciones)) {
      fn_menu(contador, menu_opciones, sizemenu_opciones);
    }

    if (btnpress) {
      if (contador == 0) { // Ingresar RPM
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("RPM: ");
        lcd.print(enteredRPM);
        
        while (true) {
          int clkState = digitalRead(salida_A);
          if (clkState != A_ultimo_estado) {
            if (digitalRead(salida_B) != clkState) {
              enteredRPM = min(enteredRPM + 10, 1000); // Incrementa hasta 10000 RPM 
            } else {
              enteredRPM = max(enteredRPM - 10, 0);  // Decrementa hasta 0
            }
            lcd.setCursor(5, 0); // Posición de RPM
            lcd.print("    ");   // Limpia los caracteres sobrantes
            lcd.setCursor(5, 0); // Vuelve a la posición para imprimir RPM
            lcd.print(enteredRPM);
      
      A_ultimo_estado = clkState;
          }
          if (digitalRead(swPin) == LOW) { // Botón para confirmar
            delay(500); // Antirrebote
            break;
          }
        }
        fn_menu(contador, menu_opciones, sizemenu_opciones);
      }

      if (contador == 1) { // Regresar al menú principal
        contador = 0; // Resetea el contador
        fn_menu(contador, menu_principal, sizemenu_principal);
        level_menu = 0; // Regresar al menú principal
      }
      btnpress = false;
    }
  }

  // Submenú de temperatura
  if (level_menu == 2) {
    if (fn_encoder(sizemenu_temperatura)) {
      fn_menu(contador, menu_temperatura, sizemenu_temperatura);
    }

    if (btnpress) {
      if (contador == 0) { // Medir Temperatura
        sensors.requestTemperatures(); // Solicita la temperatura
        float temp = sensors.getTempCByIndex(0); // Obtiene la temperatura en °C
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Temp: ");
        lcd.print(temp);
        lcd.print(" C");
        delay(2000); // Mantiene la temperatura en la pantalla durante 2 segundos
        contador = 0; // Regresar al menú de temperatura después de mostrar la temperatura
        fn_menu(contador, menu_temperatura, sizemenu_temperatura);
      }

      if (contador == 1) { // Regresar al menú principal
        contador = 0; // Resetea el contador
        fn_menu(contador, menu_principal, sizemenu_principal);
        level_menu = 0; // Regresar al menú principal
      }
      btnpress = false;
    }
  }

  // Submenú de tiempo con "Ingresar Minutos" y "Regresar"
  if (level_menu == 3) {
    if (fn_encoder(sizemenu_tiempo)) {
      fn_menu(contador, menu_tiempo, sizemenu_tiempo);
    }

    if (btnpress) {
      if (contador == 0) { // Ingresar Minutos
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Minutos: ");
        lcd.print(enteredMinutes);
        
        while (true) {
          int clkState = digitalRead(salida_A);
          if(clkState != A_ultimo_estado) {
            if (digitalRead(salida_B) != clkState) {
              enteredMinutes = min(enteredMinutes + 1, 60); // Incrementa hasta 60
            } else {
              enteredMinutes = max(enteredMinutes - 1, 0);  // Decrementa hasta 0
            }
            lcd.setCursor(9, 0); // Posición de minutos
            lcd.print(enteredMinutes);
            A_ultimo_estado = clkState;
          }
          if (digitalRead(swPin) == LOW) { // Botón para confirmar
            delay(500); // Antirrebote
            break;
          }
        }
        fn_menu(contador, menu_tiempo, sizemenu_tiempo);
      }

      if (contador == 1) { // Regresar al menú principal
        contador = 0; // Resetea el contador
        fn_menu(contador, menu_principal, sizemenu_principal);
        level_menu = 0; // Regresar al menú principal
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
  bool ret = false;
  A_estado_actual = digitalRead(salida_A);
  if (A_estado_actual != A_ultimo_estado) {
    if (digitalRead(salida_B) != A_estado_actual) {
      contador = (contador + 1) % sizemenu; // Avanza en el menú
      ret = true;
    } else {
      contador--; // Regresa en el menú
      if (contador < 0) {
        contador = sizemenu - 1; // Vuelve al final si es menor que 0
      }
      ret = true;
    }
    A_ultimo_estado = A_estado_actual;
  }
  return ret;
}
```
# Diagrama de flujo
<p align="center" ><img src="https://i.postimg.cc/Gtn6JSN8/Diagrama-de-flujo-2.jpg" style="width: 800px"></p>

# Impresión 3D
## Ensamble


## Modelado paredes del agitador
![muro_izquierda_E7_page-0001](https://github.com/user-attachments/assets/60b6834a-3e4d-4310-b213-045ab1baae6c)
![muro_derecha_E7_page-0001](https://github.com/user-attachments/assets/b7648b78-4bdd-486c-8346-515802d89ea4)
![muro_frontal_E7_page-0001](https://github.com/user-attachments/assets/3ff79484-eaad-49d0-b0c1-a75173e7f2b5)
![muro_atras_E7_page-0001](https://github.com/user-attachments/assets/ba3c199c-3114-42d1-b84b-1c4ea02c3742)


## Modelado base
![base_V2_E7_page-0001](https://github.com/user-attachments/assets/662d955c-1501-4704-971e-0f897bdb0db8)



# Reporte de pruebas, retos y limitaciones



# Retroalimentación

### Apariencia y diseño

### Ergonomía y comodidad

### Comprensión y facilidad de uso

### Funcionalidad y potenciales problemas
