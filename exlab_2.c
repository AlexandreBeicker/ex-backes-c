#include <stdio.h>

int main() {
    int celsius = 0;
    double fahrenheit, kelvin;

    printf("Temperatura (Celsius)\tTemperatura (Fahrenheit)\tTemperatura (Kelvin)\n");
    
    while ((fahrenheit = (celsius * 9.0 / 5.0) + 32.0) < 200) {
        kelvin = celsius + 273.15;

        printf("%d\t\t\t%.2f\t\t\t%.2f\n", celsius, fahrenheit, kelvin);

        celsius++;
    }

    return 0;
}
