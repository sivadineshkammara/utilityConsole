#include <stdio.h>

#include "calculator.h"
#include "geometry.h"
#include "input.h"

void temperatureConverter(void){
    printf("Still not ready\n");
} //only for testing.

void optionsFunc(int *temp){
    
    printf(
        "\n*****Enter your choice*****\n"
        "1. Calculator.\n"
        "2. Temperature Converter.\n"
        "3. Area Finder.\n"
        "4. Exit\n\n"
        
    );

    while(1){
        printf("Your Choice is: ");
        if(scanf("%d", temp)==1) break;

        printf("Invalid Value\n\n");
        while(getchar()!='\n');
    }
}

void mainMenu(int *choice){
    int temp = *choice;
    while(temp != 4 ){
        switch(temp){
            case 1:
                calculator();
                break;
            case 2:
                temperatureConverter();
                break;
            case 3:
                findArea();
                break;
            default:
                printf("****Please enter a valid option.****\n\n");
                return;
        }
        
        optionsFunc(&temp);
        // printf("====%d=====%d====\n", temp, *choice);

    }
}


int main(void){
    int choice;
    while(1){
        optionsFunc(&choice);
        switch(choice){
            case 1:
                calculator();
                break;
            case 2:
                temperatureConverter();
                break;
            case 3:
                findArea();
                break;
            case 4:
                printf("\n###..Closing the program..###\n\n");
                return 1;
            default:
                printf("\n****Invalid option.****\n\n");
        }
    }
    calculator();
    return 0;
}