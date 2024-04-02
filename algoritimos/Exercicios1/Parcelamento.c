#include <stdio.h>

int main()
{
    float valor, valor_parcelas;
    int parcelas;
    

    printf("digite o valor da sua compra: ");
    scanf("%f", &valor);
    printf("quantas parcelas voce deseja? ");
    scanf("%d", &parcelas);

    valor_parcelas = valor / parcelas;

    printf("o valor de cada parcela sera: %0.2f", valor_parcelas);

    return 0;
}
