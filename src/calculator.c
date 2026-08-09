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
#include "types.h"
#include "menu.h"

//Private function declarations.
static void performOperation(Operation op);
static void addition(void);
static void subtraction(void);
static void multiplication(void);
static void division(void);
static void modulus(void);

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
    readInt("A", &a);
    readInt("B", &b);
    printf("The difference of %d and %d is: %d\n\n", a,b,subtract(a,b));
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

static void performOperation(Operation op){
    
    switch(op){
        case OP_ADD:
            addition();
            break;
        case OP_SUBTRACT:
            subtraction();
            break;
        case OP_MULTIPLY:
            multiplication();
            break;
        case OP_DIVIDE:
            division();
            break;
        case OP_MODULUS:
            modulus();
            break;
        default:
            printf("Invalid operator\n");
            break;

    }
}

// Public function implementations.
void runCalculator(void){
    Operation option;
    int rawChoice;

    while(1){
        displayCalculatorMenu();
        readChoice(&rawChoice);
        option = (Operation)rawChoice;

        if(option == OP_EXIT){
            return;
        }
        performOperation(option);
    }

}