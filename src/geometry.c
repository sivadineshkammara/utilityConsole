/*
 * ============================================================================
 * Module      : Geometry
 * Responsibility:
 *   - Find area and perimeter of various geometric shapes
 *   - Provide reusable geometry APIs for other modules
 *
 * Public API:
 *   findArea()
 *   findPerimeter()

 *  Private Helpers:
 *    shapeMenu()
 *    areaOfSquare()
 *    areaOfRectangle()
 *    areaOfTriangle()
 *    areaOfCircle()
 *    perimeterOfSquare()
 *    perimeterOfRectangle()
 *    perimeterOfTriangle()
 *    perimeterOfCircle()
 *formulas:
 *   Celsius to Fahrenheit: (C * 9/5) + 32
 *   Fahrenheit to Celsius: (F - 32) * 5/9
 *   Area of Square: side * side
 *   Area of Rectangle: length * breadth
 *   Area of Triangle: (base * height)/2
 *   Area of Circle: pi * radius * radius
 * ============================================================================
 */

#include <stdio.h>

#include "geometry.h"
#include "input.h"

static const float PI = 3.14f; 

//function declarations for private helpers.
static void shapeMenu(void);
static void readOption(int *choice);

static void areaOfSquare(void);
static void areaOfRectangle(void); 
static void areaOfTriangle(void);
static void areaOfCircle(void);

static void perimeterOfSquare(void);
static void perimeterOfRectangle(void);
static void perimeterOfTriangle(void);
static void perimeterOfCircle(void);

//function implementations for private helpers.
static void shapeMenu(void){
    printf(
        "\n-----Chose your shape-----\n"
        "1. Square\n"
        "2. Rectangle\n"
        "3. Triangle\n"
        "4. Circle\n"
        "5. Exit\n"
    );
}

static void readOption(int *choice){
    while(1){
        printf("\nEnter your choice: ");
        if(scanf("%d", choice) == 1) break;
        printf("\n***Invalid shape choosen!!***\n");
        while(getchar()!='\n');
        
    }
}

static void areaOfSquare(void){
    float side, area;
    readFloat("side of the square", &side);
    area = side * side;
    printf("\nThe area of the square is: %.2f\n", area);
}

static void areaOfRectangle(void){
    float breadth, length, area;
    readFloat("Breadth of Rectangle", &breadth);
    readFloat("Length of Rectangle", &length);
    area = length * breadth;
    printf("\nThe area of the rectangle is: %.2f\n", area);
} 

static void areaOfTriangle(void){
    float base, height, area;
    readFloat("Base of the Trinagle", &base);
    readFloat("Height of the Triangle", &height);
    area = (base * height)/2;
    printf("\nThe area of the triangle is: %.2f\n", area);
}

static void areaOfCircle(void){
    float radius, area;
    readFloat("Radius of the Circle", &radius);
    area = PI * radius * radius;
    printf("The area of the Circle is: %.2f", area);
}

static void perimeterOfSquare(void){
    printf("\nTesting\n");
}

static void perimeterOfRectangle(void){
    printf("\nTesting\n");
}

static void perimeterOfTriangle(void){
    printf("\nTesting\n");
}

static void perimeterOfCircle(void){
    printf("\nTesting\n");
}

void findArea(void){
    int choice;
    while(1){
        shapeMenu();
        readOption(&choice);
        switch(choice){
            case 1:
                areaOfSquare();
                break;
            case 2:
                areaOfRectangle();
                break;
            case 3:
                areaOfTriangle();
                break;
            case 4:
                areaOfCircle();
                break;
            case 5:
                return;
            default:
                printf("\n***Invalid Option***\n");
                break;
        }
    }
}
void findPerimeter(void){
    int choice;
    while(1){
        shapeMenu();
        readOption(&choice);
        switch(choice){
            case 1:
                perimeterOfSquare();
                break;
            case 2:
                perimeterOfRectangle();
                break;
            case 3:
                perimeterOfTriangle();
                break;
            case 4:
                perimeterOfCircle();
                break;
            case 5:
                return;
            default:
                printf("\n***Invalid Option***\n");
                break;
        }
    }
}
