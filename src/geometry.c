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
 *  formulas:
 *   Area of Square: side * side
 *   Area of Rectangle: length * breadth
 *   Area of Triangle: (base * height)/2
 *   Area of Circle: pi * radius * radius

 *   Perimeter of Square: 4 * side
 *   Perimeter of Rectangle: 2 * (length + breadth)
 *   Perimeter of Triangle: side1 + side2 + side3
 *   Perimeter of Circle: 2 * pi * radius
 * ============================================================================
 */

#include <stdio.h>

#include "geometry.h"
#include "input.h"

static const float PI = 3.14f; 

//function declarations for private helpers.
static void findArea(void);
static void findPerimeter(void);
static void displayShapeMenu(void);

static void areaOfSquare(void);
static void areaOfRectangle(void); 
static void areaOfTriangle(void);
static void areaOfCircle(void);

static void perimeterOfSquare(void);
static void perimeterOfRectangle(void);
static void perimeterOfTriangle(void);
static void perimeterOfCircle(void);

static float calculateArea(char shape, float dimension1, float dimension2);
static float calculatePerimeter(char shape, float dimension1, float dimension2, float dimension3);


//function implementations for private helpers.
static void displayShapeMenu(void){
    printf(
        "\n-----Choose your shape-----\n"
        "1. Square\n"
        "2. Rectangle\n"
        "3. Triangle\n"
        "4. Circle\n"
        "5. Exit\n"
    );
}

static float calculateArea(char shape, float dimension1, float dimension2){
    switch(shape){
        case 'S':
            return(dimension1 * dimension1);
        case 'R':
            return(dimension1 * dimension2);
        case 'T':
            return((dimension1 * dimension2)/2);
        case 'C':
            return(PI * dimension1 * dimension1);
        default:
            printf("Invalid shape\n");
            return 0;
    }
}
static float calculatePerimeter(char shape, float dimension1, float dimension2, float dimension3){
    switch(shape){
        case 'S':
            return(4 * dimension1);
        case 'R':
            return(2 * (dimension1 + dimension2));
        case 'T':
            // Assuming dimension1, dimension2 are side1 and side2
            return(dimension1 + dimension2 + dimension3);
        case 'C':
            return(2 * PI * dimension1);
        default:
            printf("Invalid shape\n");
            return 0;
    }
}

static void areaOfSquare(void){
    float side;
    readFloat("side of the Square", &side);
    printf("\nThe area of the Square is: %.2fsqm\n", calculateArea('S', side, 0));
}

static void areaOfRectangle(void){
    float breadth, length;
    readFloat("Breadth of Rectangle", &breadth);
    readFloat("Length of Rectangle", &length);
    printf("\nThe area of the Rectangle is: %.2fsqm\n", calculateArea('R', length, breadth));
}

static void areaOfTriangle(void){
    float base, height;
    readFloat("Base of the Triangle", &base);
    readFloat("Height of the Triangle", &height);
    printf("\nThe area of the Triangle is: %.2fsqm\n", calculateArea('T', base, height));
}

static void areaOfCircle(void){
    float radius;
    readFloat("Radius of the Circle", &radius);
    printf("The area of the Circle is: %.2fsqm\n", calculateArea('C', radius, 0));
}

static void perimeterOfSquare(void){
    float side;
    readFloat("Side of the Square", &side);
    printf("\nThe perimeter of the square is: %.2fm\n", calculatePerimeter('S', side, 0, 0));
}

static void perimeterOfRectangle(void){
    float length, breadth;
    readFloat("Length of the Rectangle", &length);
    readFloat("Breadth of the Rectangle", &breadth);
    printf("\nThe perimeter of the rectangle: %.2fm\n", calculatePerimeter('R', length, breadth, 0));
}

static void perimeterOfTriangle(void){
    float sideOne, sideTwo, sideThree;
    readFloat("First side of the Triangle", &sideOne);
    readFloat("Second side of the Triangle", &sideTwo);
    readFloat("Third side of the Triangle", &sideThree);
    printf("\nThe perimeter of the Triangle: %.2fm\n", calculatePerimeter('T', sideOne, sideTwo, sideThree));
}

static void perimeterOfCircle(void){
    float radius;
    readFloat("radius of the Circle", &radius);
    printf("\nThe perimeter of the Circle: %.2fm\n", calculatePerimeter('C', radius, 0, 0));
}

static void findArea(void){
    int choice;
    while(1){
        displayShapeMenu();
        readChoice(&choice);
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
static void findPerimeter(void){
    int choice;
    while(1){
        displayShapeMenu();
        readChoice(&choice);
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

// Public functions implementations.
void runGeometryCalculator(void){
    int choice;
    while(1){
        printf(
            "\n-----Choose the function-----\n"
            "1. Find Area\n"
            "2. Find Perimeter\n"
            "3. Exit\n"
        );
        readChoice(&choice);
        switch(choice){
            case 1:
                findArea();
                break;
            case 2:
                findPerimeter();
                break;
            case 3:
                return;
            default:
                printf("\n***Invalid Option***\n");
                break;
        }
    }
}
