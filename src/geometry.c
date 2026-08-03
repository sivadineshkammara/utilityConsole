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
 * ============================================================================
 */

#include <stdio.h>

#include "geometry.h"

//function declarations for private helpers.
static void shapeMenu(void);
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

static void areaOfSquare(void){
    float side, area;
    readFloat(&side, "side of the square");
    area = side * side;
    printf("\nThe area of the square is: %.2f\n", area);
}

static void areaOfRectangle(void){
    float breadth, length, area;
    readFloat(&breadth, "Breadth of Rectangle");
    readFloat(&length, "Length of Rectangle");
    area = length * breadth;
    printf("\nThe area of the rectangle is: %.2f\n", area);
} 

static void areaOfTriangle(void);

static void areaOfCircle(void);

static void perimeterOfSquare(void);

static void perimeterOfRectangle(void);

static void perimeterOfTriangle(void);

static void perimeterOfCircle(void);
