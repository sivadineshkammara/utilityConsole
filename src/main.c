#include <stdio.h>

#include "input.h"
#include "calculator.h"
#include "temperature.h"
#include "geometry.h"

void printMainMenu(int *temp){
    
    printf(
        "\n*****Enter your choice*****\n"
        "1. Calculator.\n"
        "2. Temperature Converter.\n"
        "3. Geometry Calculator.\n"
        "4. Exit\n\n"
        
    );
    readChoice(temp);
}

// void mainMenu(int *choice){
//     int temp = *choice;
//     while(temp != 4 ){
//         switch(temp){
//             case 1:
//                 calculator();
//                 break;
//             case 2:
//                 temperatureConverter();
//                 break;
//             case 3:
//                 findArea();
//                 break;
//             default:
//                 printf("****Please enter a valid option.****\n\n");
//                 return;
//         }
        
//         optionsFunc(&temp);
//         // printf("====%d=====%d====\n", temp, *choice);

//     }
// }


int main(void){
    int choice;
    while(1){
        printMainMenu(&choice);
        switch(choice){
            case 1:
                runCalculator();
                break;
            case 2:
                runTemperatureConverter();
                break;
            case 3:
                runGeometryCalculator();
                break;
            case 4:
                printf("\n###..Closing the program..###\n\n");
                return 0;
            default:
                printf("\n****Invalid option.****\n\n");
        }
    }
    return 0;
}