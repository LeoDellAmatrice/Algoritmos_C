#include <stdio.h>

int main()
{
    soma();

    incremento();

    return 0;
}

void soma(){
    int n1 = 50;
    int n2 = 45;
    int soma = n1 + n2;
    printf("a soma e: %d", soma);
}

void incremento(){
    int numeroNovo = 50;
    numeroNovo++;
    numeroNovo++;
    printf("o numero novo vale: %d", numeroNovo);
}
