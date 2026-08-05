/*
 * ============================================================================
 * Module      : Input
 * Responsibility:
 *   - Read integer input
 *   - Read floating-point input
 *   - Validate user input
 *   - Provide reusable input APIs for other modules
 *
 * Public API:
 *   readInt()
 *   readFloat()
 *
 * Private Helpers:
 *   validateRange()      (planned)
 *   validateChar()       (planned)
 * ============================================================================
 */

#include <stdio.h>

#include "input.h"

// static int validateChar(char startChar, char endChar, const char inputVal);
// static void validateRange(const int min, const int max, const int val);

void readInt(const char *s, int *i){
    while(1){
        printf("\nEnter %s: ", s);
        if(scanf("%d", i) == 1) break;
        printf("\nInvalid Value Entered!!!\n\n");
        while(getchar() != '\n');
    }
}

void readFloat(const char *s, float *f){
    while(1){
        printf("\nEnter %s: ", s);
        if(scanf("%f", f) == 1) break;
        printf("\nInvalid Value Entered!!!\n\n");
        while(getchar() != '\n');
    }
}

void readChoice(int *option){
    while(1){
        printf("\nEnter your choice: ");
        if(scanf("%d", option) == 1) break;
        printf("\n***Invalid Option***\n");
        while(getchar() != '\n');
    }
}
// static int validateChar(char startChar, char endChar, const char inputVal){
//     if(inputVal >= startChar && inputVal <= endChar){
//         return 1;
//     }
//     return 0;
// }

// static void validateRange(const int min, const int max, const int val){}