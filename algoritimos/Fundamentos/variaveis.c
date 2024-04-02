// exemplo de algoritimo com declaração de variaveis em C

#include <stdio.h>

int main(){
    int idade = 41;
    float altura = 1.73;
    char *letra = "L";
    char nome[] = "Leonardo";

    printf("sua idade: %d \nLetra inicial do seu nome: %s \nseu nome: %s \nsua altura: %.2f", idade, letra, nome, altura);

    
    return 0;
}
