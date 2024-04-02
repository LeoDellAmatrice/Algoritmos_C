#include <stdio.h>

int main()
{
    printf("---Calcula a nota do aluno--- \n");

    int p1 = 0;
    int p2 = 0;

    printf("digite a nota da primeira prova: ");
    scanf("%d", &p1);
    printf("digite a nota da segunda prova: ");
    scanf("%d", &p2);

    float soma = p1 + p2;
    float media = soma / 2;

    printf("a media e: %.1f", media);
    return 0;
}
