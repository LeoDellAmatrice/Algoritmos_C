#include <stdio.h>

int main()
{
    float Lado_quadrado;
    printf("digite o valor do lado do quadrado: ");
    scanf("%f", &Lado_quadrado);

    float Area_quadrado = Lado_quadrado * Lado_quadrado;

    printf("Area do quadrado: %g", Area_quadrado);

    return 0;
}
