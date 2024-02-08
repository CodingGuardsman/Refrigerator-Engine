//@file q.c
//@author Bryan Lee Kwan Hong (Kwanhong.lee)
//@course CSD1121F22
//@section Section A
//@tutorial Ass03
//@date 17/9/2022
//@brief This is the file q.c that contains the defintion and implementation of
// the functions temp_converter which converts Fahrenheit to kelvin and celsius.

// This file, q.c, contains the code that is the definition for the conversion (including implementation)
// from fahrenheit to kelvin and celsius.

#include <stdio.h>
#include "q.h"

void temp_converter(int F) {
    int Fahrenheit = (int)(F);
    double Celsius = (double)(F-32)*5/9;
    double Kelvin = Celsius+273.15;
    printf("Fahrenheit     Celsius        Kelvin         \n");
    printf("---------------------------------------------\n");
    printf("%-15d%-15.2lf%-15.2lf\n", Fahrenheit, Celsius, Kelvin);
}