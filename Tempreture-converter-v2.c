#include <stdio.h>
#include <math.h>
int main() 
{
    char unit = 'a';
    char to_unit = 'a';
    float C, F, K;
    double celsius, fahrenheit, kelvin;

    printf("Enter your tempreture unit (C/F/K):");
    scanf("%c", &unit);
    printf("Enter the tempreture unit you want to convert to (C/F/K):");
    scanf(" %c", &to_unit);
    if (unit == to_unit) {
        printf("You entered the same unit to convert from and to. No conversion needed.\n");
        return 0;
    }
    else if(unit == 'C' && to_unit == 'F') {
        double celsius;
        printf("Enter temperature in Celsius: ");
        scanf("%lf", &celsius);
        double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        printf("%.2lf Celsius is equal to %.2lf Fahrenheit\n", celsius, fahrenheit);
    }
    else if(unit == 'C' && to_unit == 'K') {
        double celsius;
        printf("Enter temperature in Celsius: ");
        scanf("%lf", &celsius);
        double kelvin = celsius + 273.15;
        printf("%.2lf Celsius is equal to %.2lf Kelvin\n", celsius, kelvin);
    }
    else if(unit == 'F' && to_unit == 'C') {
        double fahrenheit;
        printf("Enter temperature in Fahrenheit: ");
        scanf("%lf", &fahrenheit);
        double celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
        printf("%.2lf Fahrenheit is equal to %.2lf Celsius\n", fahrenheit, celsius);
    }
    else if(unit == 'F' && to_unit == 'K') {
        double fahrenheit;
        printf("Enter temperature in Fahrenheit: ");
        scanf("%lf", &fahrenheit);
        double kelvin = (fahrenheit - 32.0) * 5.0 / 9.0 + 273.15;
        printf("%.2lf Fahrenheit is equal to %.2lf Kelvin\n", fahrenheit, kelvin);
    }
    else if(unit == 'K' && to_unit == 'C') {
        double kelvin;
        printf("Enter temperature in Kelvin: ");
        scanf("%lf", &kelvin);
        double celsius = kelvin - 273.15;
        printf("%.2lf Kelvin is equal to %.2lf Celsius\n", kelvin, celsius);
    }
    else if(unit == 'K' && to_unit == 'F') {
        double kelvin;
        printf("Enter temperature in Kelvin: ");
        scanf("%lf", &kelvin);
        double fahrenheit = (kelvin - 273.15) * 9.0 / 5.0 + 32.0;
        printf("%.2lf Kelvin is equal to %.2lf Fahrenheit\n", kelvin, fahrenheit);
    }
    else {
        printf("Invalid unit entered. Please use C, F, K only.\n");
        return 0;
    }
    return 0;
}
