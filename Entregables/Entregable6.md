# Hardware electrónico


## Diseño esquemático electrónico
![Schematic_Agitador-Magnetico_2024-10-21_page-0001](https://github.com/user-attachments/assets/1d87ac7b-b530-4613-a75e-41eadb8a8bd7)


## Ejecución


## Diagrama de flujo


## Código
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Inicializa el LCD I2C con la dirección y el tamaño
LiquidCrystal_I2C lcd(0x27, 16, 2); // Cambia la dirección si es necesario.

const int encoderPinA = 2; // Pin del encoder
const int encoderPinB = 3; // Pin del encoder
const int buttonPin = 4;   // Pin del botón del encoder

volatile int encoderPos = 0; // Posición del encoder
int lastEncoderPos = 0;

int menuIndex = 0; // Índice del menú
const char* mainMenuItems[] = {"RPM", "Temperatura", "Tiempo"};
const int mainMenuItemsCount = sizeof(mainMenuItems) / sizeof(mainMenuItems[0]);

const char* subMenuItems[] = {"Cambiar Valor", "Salir"};
const int subMenuItemsCount = sizeof(subMenuItems) / sizeof(subMenuItems[0]);

int currentMenu = 0; // 0: Menú principal, 1: Menú secundario

void setup() {
    lcd.begin(16, 2); // Cambia a lcd.begin(16, 2) para inicializar correctamente
    lcd.backlight();  // Activa la luz de fondo del LCD
    pinMode(encoderPinA, INPUT_PULLUP);
    pinMode(encoderPinB, INPUT_PULLUP);
    pinMode(buttonPin, INPUT_PULLUP);
    attachInterrupt(digitalPinToInterrupt(encoderPinA), updateEncoder, CHANGE);
    displayMainMenu();
}

void loop() {
    // Solo actualizar la pantalla si el encoder ha cambiado de posición
    if (encoderPos != lastEncoderPos) {
        lastEncoderPos = encoderPos;

        if (currentMenu == 0) { // Menú principal
            menuIndex += encoderPos > 0 ? 1 : -1;

            // Mantener el índice dentro de los límites del menú
            if (menuIndex >= mainMenuItemsCount) {
                menuIndex = 0;
            } else if (menuIndex < 0) {
                menuIndex = mainMenuItemsCount - 1;
            }
            
            displayMainMenu();
        } else { // Menú secundario
            menuIndex += encoderPos > 0 ? 1 : -1;

            // Mantener el índice dentro de los límites del menú
            if (menuIndex >= subMenuItemsCount) {
                menuIndex = 0;
            } else if (menuIndex < 0) {
                menuIndex = subMenuItemsCount - 1;
            }
            
            displaySubMenu();
        }
    }

    // Verifica si se presiona el botón
    if (digitalRead(buttonPin) == LOW) {
        delay(50); // Debounce
        if (currentMenu == 0) {
            // Entrar en el submenú
            currentMenu = 1; // Cambiar a submenú
            displaySubMenu();
        } else {
            // Salir del submenú
            if (menuIndex == 0) {
                // Aquí puedes agregar la lógica para cambiar el valor
                // (si lo necesitas)
            }
            currentMenu = 0; // Regresar al menú principal
            menuIndex = 0; // Reiniciar índice del menú
            displayMainMenu();
        }
    }
}

// Función para mostrar el menú principal en la pantalla LCD
void displayMainMenu() {
    lcd.clear();
    lcd.print(mainMenuItems[menuIndex]);
}

// Función para mostrar el submenú en la pantalla LCD
void displaySubMenu() {
    lcd.clear();
    lcd.print(mainMenuItems[menuIndex]);
    lcd.setCursor(0, 1);
    lcd.print(subMenuItems[menuIndex]);
}

// Función para actualizar la posición del encoder
void updateEncoder() {
    // Lee el pin B para determinar la dirección
    if (digitalRead(encoderPinB) == HIGH) {
        encoderPos = 1; // Se rotó hacia adelante
    } else {
        encoderPos = -1; // Se rotó hacia atrás
    }
}
# Impresión 3D

## Modelado base


## Modelado pantalla


## Modelado tapa


# Reporte de pruebas, retos y limitaciones
