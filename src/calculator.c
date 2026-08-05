/*
 * ============================================================================
 * Module      : Calculator
 * Responsibility:
 *   - Find sum, difference, product, quotient and remainder of two numbers
 *   - Provide reusable calculator APIs for other modules
 *
 * Public API:
 *   calculator()
 *   calculateAndPrint()

 *  Private Helpers:
 *    addition()
 *    subtraction()
 *    multiplication()
 *    division()
 *    modulus()
 *
 *
 * ============================================================================
 */

#include <stdio.h>

#include "calculator.h"
#include "input.h"

//Private function declarations.
static void addition(void);
static void subtraction(void);
static void multiplication(void);
static void division(void);
static void modulus(void);
// static int validateDivisor(int d);

// static void repeatCalculation(void);
// static int validateDivisor(int d){
//     if(d == 0){
//         printf("Error: Division by zero is not allowed.\n");
//         return 1;
//     }
//     return 0;
// }
static int add(const int a, const int b){
    return(a+b);
}

static int subtract(const int a, const int b){
    return(a-b);
}

static float multiply(const float a, const float b){
    return(a*b);
}

static float divide(const float a, const float b){
    return(a/b);
}

static int calculateRemainder(const int a, const int b){
    return(a%b);
}

static void addition(void){
    int a,b;

    readInt("A", &a);
    readInt("B", &b);

    printf("The sum of %d and %d is: %d\n\n", a,b,add(a,b));
}

static void subtraction(void){
    int a,b;
    // static const char *s1 = "A";
    // static const char *s2 = "B";
    readInt("A", &a);
    readInt("B", &b);
    printf("The difference of %d and %d is: %d\n\n", a,b,subtract(a,b));
    printf("The difference of %d and %d is: %d\n\n", b,a,subtract(b,a));
}

static void multiplication(void){
    float a,b;
    readFloat("A", &a);
    readFloat("B", &b);
    printf("The product of %.2f and %.2f is: %.2f\n\n", a,b,multiply(a,b));
}

static void division(void){
    float a,b;
    
    readFloat("A", &a);
    readFloat("B", &b);
    if(b == 0){
        printf("Error: Division by zero is not allowed.\n");
        return;
    }
    printf("The quotient of %f and %f is: %.2f\n\n", a,b,divide(a,b));
}

static void modulus(void){
    int a,b;
    
    readInt("A", &a);
    readInt("B", &b);
    if(b == 0){
        printf("Error: Division by zero is not allowed.\n");
        return;
    }
    printf("The remainder of %d and %d is: %d\n\n", a,b,calculateRemainder(a,b));
}

void performOperation(char op){
    
    switch(op){
        case '+':
            addition();
            break;
        case '-':
            subtraction();
            break;
        case '*':
            multiplication();
            break;
        case '/':
            division();
            break;
        case '%':
            modulus();
            break;
        default:
            printf("Invalid operator\n");
            break;

    }
}

// Public function implementations.
void runCalculator(void){
    int option;

    while(1){
        printf(
            "\n-----Select your operation-----\n"
            "1. Addition of two numbers\n"
            "2. Subtraction of two numbers\n"
            "3. Multiplication of two numbers\n"
            "4. Division of two numbers\n"
            "5. Find the Remainder\n"
            "6. Exit\n"
        );

        readChoice(&option);
        // printf("\n");

        switch(option){
            case 1:
                performOperation('+');
                break;
            case 2:
                performOperation('-');
                break;
            case 3:
                performOperation('*');
                break;
            case 4:
                performOperation('/');
                break;
            case 5:
                performOperation('%');
                break;
            case 6:
                return;
            default:
                printf("***Please enter a valid option***\n\n");
                break;
        }
    }

}

// static void repeatCalculation(void){
//     char choice;
//     while(1){
//         printf("Do you want to perform another calculation? (y/n): ");
//         scanf(" %c", &choice);
//         if(choice == 'y' || choice == 'Y'){
//             calculator();
//             break;
//         } else if(choice == 'n' || choice == 'N'){
//             printf("Exiting the calculator.\n");
//             break;
//         } else {
//             printf("Invalid input. Please enter 'y' or 'n'.\n");
//         }
//     }
// }