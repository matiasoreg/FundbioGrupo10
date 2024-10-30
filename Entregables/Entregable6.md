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

# Impresión 3D

## Modelado base


## Modelado pantalla


## Modelado tapa


# Reporte de pruebas, retos y limitaciones
