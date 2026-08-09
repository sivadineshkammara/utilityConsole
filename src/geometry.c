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
#include "types.h"
#include "menu.h"

static const float PI = 3.14f; 

//function declarations for private helpers.
static void findArea();
static void findPerimeter();

static void areaOfSquare(Shape op);
static void areaOfRectangle(Shape op); 
static void areaOfTriangle(Shape op);
static void areaOfCircle(Shape op);

static void perimeterOfSquare(Shape op);
static void perimeterOfRectangle(Shape op);
static void perimeterOfTriangle(Shape op);
static void perimeterOfCircle(Shape op);

static float calculateArea(Shape shape, float dimension1, float dimension2);
static float calculatePerimeter(Shape shape, float dimension1, float dimension2, float dimension3);


//function implementations for private helpers.
static float calculateArea(Shape shape, float dimension1, float dimension2){
    switch(shape){
        case SHAPE_SQUARE:
            return(dimension1 * dimension1);
        case SHAPE_RECTANGLE:
            return(dimension1 * dimension2);
        case SHAPE_TRIANGLE:
            return((dimension1 * dimension2)/2);
        case SHAPE_CIRCLE:
            return(PI * dimension1 * dimension1);
        default:
            printf("Invalid shape\n");
            return 0;
    }
}
static float calculatePerimeter(Shape shape, float dimension1, float dimension2, float dimension3){
    switch(shape){
        case SHAPE_SQUARE:
            return(4 * dimension1);
        case SHAPE_RECTANGLE:
            return(2 * (dimension1 + dimension2));
        case SHAPE_TRIANGLE:
            return(dimension1 + dimension2 + dimension3);
        case SHAPE_CIRCLE:
            return(2 * PI * dimension1);
        default:
            printf("Invalid shape\n");
            return 0;
    }
}

static void areaOfSquare(Shape op){
    float side;
    readFloat("side of the Square", &side);
    printf("\nThe area of the Square is: %.2fsqm\n", calculateArea(op, side, 0));
}

static void areaOfRectangle(Shape op){
    float breadth, length;
    readFloat("Breadth of Rectangle", &breadth);
    readFloat("Length of Rectangle", &length);
    printf("\nThe area of the Rectangle is: %.2fsqm\n", calculateArea(op, length, breadth));
}

static void areaOfTriangle(Shape op){
    float base, height;
    readFloat("Base of the Triangle", &base);
    readFloat("Height of the Triangle", &height);
    printf("\nThe area of the Triangle is: %.2fsqm\n", calculateArea(op, base, height));
}

static void areaOfCircle(Shape op){
    float radius;
    readFloat("Radius of the Circle", &radius);
    printf("The area of the Circle is: %.2fsqm\n", calculateArea(op, radius, 0));
}

static void perimeterOfSquare(Shape op){
    float side;
    readFloat("Side of the Square", &side);
    printf("\nThe perimeter of the square is: %.2fm\n", calculatePerimeter(op, side, 0, 0));
}

static void perimeterOfRectangle(Shape op){
    float length, breadth;
    readFloat("Length of the Rectangle", &length);
    readFloat("Breadth of the Rectangle", &breadth);
    printf("\nThe perimeter of the rectangle: %.2fm\n", calculatePerimeter(op, length, breadth, 0));
}

static void perimeterOfTriangle(Shape op){
    float sideOne, sideTwo, sideThree;
    readFloat("First side of the Triangle", &sideOne);
    readFloat("Second side of the Triangle", &sideTwo);
    readFloat("Third side of the Triangle", &sideThree);
    printf("\nThe perimeter of the Triangle: %.2fm\n", calculatePerimeter(op, sideOne, sideTwo, sideThree));
}

static void perimeterOfCircle(Shape op){
    float radius;
    readFloat("radius of the Circle", &radius);
    printf("\nThe perimeter of the Circle: %.2fm\n", calculatePerimeter(op, radius, 0, 0));
}

static void findArea(){
    Shape option;
    int choice;
    while(1){
        displayShapeMenu();
        readChoice(&choice);
        option = (Shape)choice;
        switch(option){
            case SHAPE_SQUARE:
                areaOfSquare(SHAPE_SQUARE);
                break;
            case SHAPE_RECTANGLE:
                areaOfRectangle(SHAPE_RECTANGLE);
                break;
            case SHAPE_TRIANGLE:
                areaOfTriangle(SHAPE_TRIANGLE);
                break;
            case SHAPE_CIRCLE:
                areaOfCircle(SHAPE_CIRCLE);
                break;
            case SHAPE_EXIT:
                return;
            default:
                printf("\n***Invalid Option***\n");
                break;
        }
    }
}
static void findPerimeter(){
    Shape option;
    int choice;
    while(1){
        displayShapeMenu();
        readChoice(&choice);
        option = (Shape)choice;
        switch(option){
            case SHAPE_SQUARE:
                perimeterOfSquare(SHAPE_SQUARE);
                break;
            case SHAPE_RECTANGLE:
                perimeterOfRectangle(SHAPE_RECTANGLE);
                break;
            case SHAPE_TRIANGLE:
                perimeterOfTriangle(SHAPE_TRIANGLE);
                break;
            case SHAPE_CIRCLE:
                perimeterOfCircle(SHAPE_CIRCLE);
                break;
            case SHAPE_EXIT:
                return;
            default:
                printf("\n***Invalid Option***\n");
                break;
        }
    }
}

// Public functions implementations.
void runGeometryCalculator(void){
    GeometryOption geometryOption;
    int choice;
    while(1){
        displayGeometryMenu();
        readChoice(&choice);
        geometryOption = (GeometryOption)choice;
        switch(geometryOption){
            case GEOMETRY_AREA:
                findArea();
                break;
            case GEOMETRY_PERIMETER:
                findPerimeter();
                break;
            case GEOMETRY_EXIT:
                return;
            default:
                printf("\n***Invalid Option***\n");
                break;
        }
    }
}
