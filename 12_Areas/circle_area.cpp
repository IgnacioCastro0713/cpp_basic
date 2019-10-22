#include <iostream>
#include <cmath>

int main() {
    float radio_circulo, area_circulo;

    printf("ingrese radio del ciruclo: ");

    scanf("%f", &radio_circulo);

    area_circulo = M_PI * pow(radio_circulo, 2);

    printf("El area es: %f \n", area_circulo);

    return 0;
}
