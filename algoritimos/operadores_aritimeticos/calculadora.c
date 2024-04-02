#include <stdio.h>

int main()
{
    float n1, n2, soma, divisao, subtracao, multiplicacao;

    printf("digite um numero: ");
    scanf("%f", &n1);
    printf("digite um outro numero: ");
    scanf("%f", &n2);

    soma = n1 + n2;
    divisao = n1 / n2;
    multiplicacao = n1 * n2;
    subtracao = n1 - n2;

    printf("algumas contas pssiveis sao:\n");
    printf("soma: %g + %g = %g\n", n1, n2, soma);
    printf("subtracao: %g - %g = %g\n", n1, n2, subtracao);
    printf("multiplicacao: %g x %g = %g\n", n1, n2, multiplicacao);
    printf("divisao: %g / %g = %g\n", n1, n2, divisao);

    return 0;
}