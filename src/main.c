#include <stdio.h>

#include "input.h"
#include "calculator.h"
#include "temperature.h"
#include "geometry.h"
#include "types.h"
#include "menu.h"

int main(void){
    MainMenuOption choice;
    int temp;
    while(1){
        displayMainMenu();
        readChoice(&temp);
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