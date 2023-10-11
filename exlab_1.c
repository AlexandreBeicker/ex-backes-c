#include <stdio.h>

int main() {
    int celsius;
    double fahrenheit, kelvin;

    printf("Temperatura (Celsius)\tTemperatura (Fahrenheit)\tTemperatura (Kelvin)\n");
    
    for (celsius = -10; celsius <= 100; celsius++) {
        fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        kelvin = celsius + 273.15;

        printf("%d\t\t\t%.2f\t\t\t%.2f\n", celsius, fahrenheit, kelvin);
    }

    return 0;
}
