# Hardware electrónico


## Diseño esquemático electrónico
![Schematic_Agitador-Magnetico_2024-10-21_page-0001](https://github.com/user-attachments/assets/1d87ac7b-b530-4613-a75e-41eadb8a8bd7)


## Ejecución


## Diagrama de flujo


## Código
#include <Wire.h>}

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

# Impresión 3D


## Modelado base
![base](https://github.com/user-attachments/assets/71632350-667a-4c8f-b887-780aa3e500f3)
Onshape: https://cad.onshape.com/documents/8cf54e73229aa9dbee2ddc56/w/062d838551a5d2eee3c4d110/e/15b0130b46fccd5b27bffcdc?renderMode=0&uiState=6721b04cd89c7375d5919aff

## Modelado compartimiento LCD
![compartimiento](https://github.com/user-attachments/assets/cca21cc6-9f82-4d30-a3e5-45126697bbae)
Onshape: https://cad.onshape.com/documents/4d86daae90a51e452a105eb6/w/112c9f9d8a2cc7a1d0a6b566/e/289a4ad4363b5dc3fbe458d6?renderMode=0&uiState=6721b013a0b6105b58d82010


## Modelado tapa
![tapa](https://github.com/user-attachments/assets/982061f7-0776-4847-8587-9b9855127dca)
Onshape: https://cad.onshape.com/documents/e32b461ecded831de141a953/w/2b3a1de321e319e3a527e843/e/3df5d2dbd5c1e4523cc2d2fb?renderMode=0&uiState=6721a8bd0c93776dc0d5a511


# Reporte
![retos](https://github.com/user-attachments/assets/3c181e80-e035-4dc0-a3a0-859b87a8fd67)
