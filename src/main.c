#include <stdio.h>

#include "input.h"
#include "calculator.h"
#include "temperature.h"
#include "geometry.h"
#include "types.h"

void printMainMenu(void){
    printf(
        "\n*****Enter your choice*****\n"
        "1. Calculator.\n"
        "2. Temperature Converter.\n"
        "3. Geometry Calculator.\n"
        "4. Exit\n\n"
        
    );
}

int main(void){
    MainMenuOption choice;
    int temp;
    while(1){
        printMainMenu();
        choice = (MainMenuOption)temp;
        switch(choice){
            case MENU_CALCULATOR:
                runCalculator();
                break;
            case MENU_TEMPERATURE:
                runTemperatureConverter();
                break;
            case MENU_GEOMETRY:
                runGeometryCalculator();
                break;
            case MENU_EXIT:
                printf("\n###..Closing the program..###\n\n");
                return 0;
            default:
                printf("\n****Invalid option.****\n\n");
        }
    }
    return 0;
}