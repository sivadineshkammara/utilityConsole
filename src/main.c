#include <stdio.h>

#include "input.h"
#include "calculator.h"
#include "temperature.h"
#include "geometry.h"
#include "types.h"

void printMainMenu(MainMenuOption *choice){
    int temp;
    printf(
        "\n*****Enter your choice*****\n"
        "1. Calculator.\n"
        "2. Temperature Converter.\n"
        "3. Geometry Calculator.\n"
        "4. Exit\n\n"
        
    );
    readChoice(&temp);
    *choice = (MainMenuOption)temp;
}

int main(void){
    MainMenuOption choice;
    while(1){
        printMainMenu(&choice);
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