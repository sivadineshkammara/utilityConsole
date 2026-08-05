/*
 * ============================================================================
 * Module      : Temperature Converter
 * Responsibility:
 *   - Read temperture form user, convert it from celcius to faherenheit.
 *   - Provide reusable temperatur APIs for other modules
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


//Private function declarations.
static void temperatureTable(void);

static void celsiusToFahrenheit(void);
static void celsiusToKelvin(void);

static void fahrenheitToCelsius(void);
static void fahrenfeitToKelvin(void);

static void kelvinToCelsius(void);
static void kelvinToFahrenheit(void);

//Helper functions implementations.
static void temperatureTable(void){
    printf(
        "\n*** Choose the temprature conversion ***\n"
        "1.Celsius to Fahrenheit\n"
        "2.Celsius to Kelvin\n"
        "3.Fahrenheit to Celsius\n"
        "4.Fahrenheit to Kelvin\n"
        "5.Kelvin to Celsius\n"
        "6.Kelvin to Fahrenheit\n"
        "7.Return to Main menu\n"
    )
}

static void celsiusToFahrenheit(void){}
static void celsiusToKelvin(void){}

static void fahrenheitToCelsius(void){}
static void fahrenfeitToKelvin(void){}

static void kelvinToCelsius(void){}
static void kelvinToFahrenheit(void){}

// Public functions implementations.
void convertTemperature(void){
    int option;
    while(1){
        temperatureTable();
        readChoice(&option);
        switch(option){
            case 1:
                celsiusToFahrenheit();
                break;
            case 2:
                celsiusToKelvin();
                break;
            case 3:
                fahrenheitToCelsius();
                break;
            case 4:
                fahrenfeitToKelvin();
                break;
            case 5:
                kelvinToCelsius();
                break;
            case 6:
                kelvinToFahrenheit();
                break;
            case 7:
                return;
            default:
                printf("***Please enter a valid option***\n\n");
                break;
        }
    }
}