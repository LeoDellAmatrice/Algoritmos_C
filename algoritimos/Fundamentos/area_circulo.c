#include <stdio.h>
#include <math.h>

int main()
{
    float raio_circulo;
    double pi = M_PI;

    printf("digite o valor do lado do raio: ");
    scanf("%f", &raio_circulo);

    float area_circulo = pi * raio_circulo;

    printf("Area do circulo: %f", area_circulo);

    return 0;
}
