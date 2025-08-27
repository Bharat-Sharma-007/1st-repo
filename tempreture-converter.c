#include <stdio.h>

int main() {
    char unit, to_unit;
    double temp;
    printf("Enter your temperature unit (C/F/K): ");
    scanf(" %c", &unit);
    printf("Enter the temperature: ");
    scanf("%lf", &temp);
    printf("Enter the temperature unit you want to convert to (C/F/K): ");
    scanf(" %c", &to_unit);
    if (unit == to_unit) {
        printf("Same unit selected. Temperature remains %.2lf %c.\n", temp, unit);
        return 0;
    }
    double result;
    if (unit == 'C' && to_unit == 'F') {
        result = (temp * 9.0 / 5.0) + 32.0;
        printf("%.2lf Celsius = %.2lf Fahrenheit\n", temp, result);
    } 
    else if (unit == 'C' && to_unit == 'K') {
        result = temp + 273.15;
        printf("%.2lf Celsius = %.2lf Kelvin\n", temp, result);
    }
    else if (unit == 'F' && to_unit == 'C') {
        result = (temp - 32.0) * 5.0 / 9.0;
        printf("%.2lf Fahrenheit = %.2lf Celsius\n", temp, result);
    }
    else if (unit == 'F' && to_unit == 'K') {
        result = (temp - 32.0) * 5.0 / 9.0 + 273.15;
        printf("%.2lf Fahrenheit = %.2lf Kelvin\n", temp, result);
    }
    else if (unit == 'K' && to_unit == 'C') {
        result = temp - 273.15;
        printf("%.2lf Kelvin = %.2lf Celsius\n", temp, result);
    }
    else if (unit == 'K' && to_unit == 'F') {
        result = (temp - 273.15) * 9.0 / 5.0 + 32.0;
        printf("%.2lf Kelvin = %.2lf Fahrenheit\n", temp, result);
    }
     else {
        printf("Invalid unit entered. Please use C, F, or K only.\n");
    }
  return 0;
}

