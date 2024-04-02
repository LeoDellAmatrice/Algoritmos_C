#include <stdio.h>

int main()
{
    float C, F;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &C);

    F = C * 1.8 + 32;

    printf("%.1fC em Fahrenheit: %.1fF", C, F);

    return 0;
}
