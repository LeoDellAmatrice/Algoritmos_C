#include <stdio.h>

int main()
{
    float salario = 0;
    int porcentagem = 0; 

    printf("escreva seu salario atual: ");
    scanf("%f", &salario);
    printf("escreva o seu aumento(apenas os numeros): ");
    scanf("%d", &porcentagem);

    float N_salario = (salario * porcentagem / 100) + salario;

    printf("seu nono salario e: %.2f", N_salario);

    return 0;
}
