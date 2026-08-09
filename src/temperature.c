/*
 * ============================================================================
 * Module      : Temperature Converter
 * Responsibility:
 *   - Read temperature from user, convert it from Celsius to Fahrenheit.
 *   - Provide reusable temperature APIs for other modules
 *
 * Public API:
 *   temperatureConverter()

 *  Private Helpers:
 *    fahrenheitToCelsius()
 *    fahrenheitToKelvin()
 *    celsiusToFahrenheit()
 *    celsiusToKelvin()
 *    kelvinToCelsius()
 *    kelvinToFahrenheit()
 *  
 *  Formulas: 
 *    celsius to fahrenheit = (c * 1.8) + 32
 *    celsius to kelvin     = c + 273.15
 *    fahrenheit to celsius = (f - 32) / 1.8
 *    fahrenheit to kelvin  = ((f - 32) / 1.8) + 273.15
 *    kelvin to celsius     = k - 273.15
 *    kelvin to fahrenheit  = ((k + 273.15) * 1.8) + 32
 * ============================================================================
*/

#include <stdio.h>

#include "input.h"
#include "calculator.h"
#include "temperature.h"
#include "types.h"
#include "menu.h"


//Private function declarations.
static void celsiusToFahrenheit(void);
static void celsiusToKelvin(void);

static void fahrenheitToCelsius(void);
static void fahrenheitToKelvin(void);

static void kelvinToCelsius(void);
static void kelvinToFahrenheit(void);

//Helper functions implementations.
static void celsiusToFahrenheit(void){
    float celsiusVal;
    readFloat("temperature in Celsius", &celsiusVal);
    printf("Converted temperature is: %.2fF\n\n", (celsiusVal * 1.8) + 32);
}
static void celsiusToKelvin(void){
    float celsiusVal;
    readFloat("temperature in Celsius", &celsiusVal);
    printf("Converted temperature is: %.2fK\n\n", celsiusVal + 273.15);
}

static void fahrenheitToCelsius(void){
    float fahrenheitVal;
    readFloat("temperature in Fahrenheit", &fahrenheitVal);
    printf("Converted temperature is: %.2fC\n\n", (fahrenheitVal - 32) / 1.8);
}
static void fahrenheitToKelvin(void){
    float fahrenheitVal;
    readFloat("temperature in Fahrenheit", &fahrenheitVal);
    printf("Converted temperature is: %.2fK\n\n", ((fahrenheitVal - 32) / 1.8) + 273.15);
}

static void kelvinToCelsius(void){
    float kelvinVal;
    readFloat("temperature in Kelvin", &kelvinVal);
    printf("Converted temperature is: %.2fC\n\n", kelvinVal - 273.15);
}
static void kelvinToFahrenheit(void){
    float kelvinVal;
    readFloat("temperature in Kelvin", &kelvinVal);
    printf("Converted temperature is: %.2fF\n\n", ((kelvinVal - 273.15) * 1.8) + 32);
}   

// Public functions implementations.
void runTemperatureConverter(void){
    TemperatureConversion temperatureUnit;
    int option;
    while(1){
        displayTemperatureMenu();
        readChoice(&option);
        temperatureUnit = (TemperatureConversion)option;
        switch(temperatureUnit){
            case CONVERT_CELSIUS_FAHRENHEIT:
                celsiusToFahrenheit();
                break;
            case CONVERT_CELSIUS_KELVIN:
                celsiusToKelvin();
                break;
            case CONVERT_FAHRENHEIT_CELSIUS:
                fahrenheitToCelsius();
                break;
            case CONVERT_FAHRENHEIT_KELVIN:
                fahrenheitToKelvin();
                break;
            case CONVERT_KELVIN_CELSIUS:
                kelvinToCelsius();
                break;
            case CONVERT_KELVIN_FAHRENHEIT:
                kelvinToFahrenheit();
                break;
            case CONVERT_EXIT:
                return;
            default:
                printf("***Please enter a valid option***\n\n");
                break;
        }
    }
}