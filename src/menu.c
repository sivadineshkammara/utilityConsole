/*
 * ============================================================================
 * Module      : Menu
 * Responsibility:
 *   - Print menu options.
 *
 * Public API:
 *   displayMainMenu()
 *   displayCalculatorMenu()
 *   displayTemperatureMenu()
 *   displayGeometryMenu()
 *
 *
 *
 * ============================================================================
*/

#include <stdio.h>
#include "menu.h"

//Implementing display menu functions.
void displayMainMenu(void){
    printf(
        "\n*****Enter your choice*****\n"
        "1. Calculator.\n"
        "2. Temperature Converter.\n"
        "3. Geometry Calculator.\n"
        "4. Exit\n\n"
        
    );
}

void displayCalculatorMenu(void){
    printf(
        "\n-----Select your operation-----\n"
        "1. Addition of two numbers\n"
        "2. Subtraction of two numbers\n"
        "3. Multiplication of two numbers\n"
        "4. Division of two numbers\n"
        "5. Find the Remainder\n"
        "6. Exit\n"
    );
}

void displayTemperatureMenu(void){
    printf(
        "\n*** Choose the temperature conversion ***\n"
        "1.Celsius to Fahrenheit\n"
        "2.Celsius to Kelvin\n"
        "3.Fahrenheit to Celsius\n"
        "4.Fahrenheit to Kelvin\n"
        "5.Kelvin to Celsius\n"
        "6.Kelvin to Fahrenheit\n"
        "7.Return to Main menu\n"
    );
}

void displayGeometryMenu(){
    printf(
        "\n-----Choose the function-----\n"
        "1. Find Area\n"
        "2. Find Perimeter\n"
        "3. Exit\n"
    );
}
void displayShapeMenu(void){
    printf(
        "\n-----Choose your shape-----\n"
        "1. Square\n"
        "2. Rectangle\n"
        "3. Triangle\n"
        "4. Circle\n"
        "5. Exit\n"
    );
}