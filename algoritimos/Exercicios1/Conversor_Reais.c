#include <stdio.h>

int main()
{
    float reais, dolar, C;
    char pergunta = 'n';
    char yes = 'Y';
    char yes2 = 'y';

    printf("Digite quantos reais voce quer converter: ");
    scanf("%f", &reais);
    printf("Voce sabe a cotacao do dolar? [Y/N]: ");
    scanf(" %c", &pergunta);
    
    if (pergunta == yes || pergunta == yes2) {
        printf("Digite a cotacao do dolar: ");
        scanf("%f", &C);
        dolar = reais / C;
        printf("Com a cotacao do dolar sendo %.2f, voce tera %.2f$ apos a conversao.\n", C, dolar);
    } else {
        dolar = reais / 4.98;
        printf("Com o valor do dolar sendo 4.98, voce tera %.2f$ apos a conversao.\n", dolar);
    }

    return 0;
}