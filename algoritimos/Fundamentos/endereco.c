// R. Caconde, 85 - Monte Líbano, Piracicaba - SP, 13401-568

#include <stdio.h>

int main(){
    char logadouro[] = "R. Caconde";
    char bairro[] = "Monte libano";
    char cidade[] = "piracicaba";
    char cep[] = "13401-568";
    char estado[] = "SP";
    int numero = 85;

    printf("seu endereco: %s, %d - %s, %s - %s, %s", logadouro, numero, bairro, cidade, estado, cep);

    return 0;
}
