#ifndef TYPES_H
#define TYPES_H

typedef enum{
    MENU_CALCULATOR = 1,
    MENU_TEMPERATURE,
    MENU_GEOMETRY,
    MENU_EXIT
}MainMenuOption;

typedef enum{
    OP_ADD = 1,
    OP_SUBTRACT,
    OP_MULTIPLY,
    OP_DIVIDE,
    OP_MODULUS,
    OP_EXIT
}Operation;

typedef enum{
    SHAPE_SQUARE = 1,
    SHAPE_RECTANGLE,
    SHAPE_TRIANGLE,
    SHAPE_CIRCLE,
    SHAPE_EXIT
} Shape;

typedef enum{
    SCALE_CELSIUS = 1,
    SCALE_FAHRENHIET,
    SCALE_KELVIN,
    SCALE_EXIT
}TemperatureScale;

typedef enum{
    GEOMETRY_AREA = 1,
    GEOMETRY_PERIMETER,
    GEOMETRY_EXIT
}GemoetryOption;

#endif