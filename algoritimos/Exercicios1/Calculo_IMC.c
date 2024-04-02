#include <stdio.h>

int main()
{
    float peso, altura, IMC;

    printf("digite sua altura: ");
    scanf("%f", &altura);
    printf("digite seu peso: ");
    scanf("%f", &peso);

    IMC = peso / (altura * altura);

    if (IMC < 17){
        printf("seu IMC e %.2f voce esta muito abaixo do peso", IMC);
    } else if( IMC > 16 && IMC < 18.5) {
        printf("seu IMC e %.2f voce esta abaixo do peso", IMC);
    } else if( IMC > 18.49 && IMC < 25) {
        printf("seu IMC e %.2f voce esta normal", IMC);
    } else if( IMC > 24.99 && IMC < 30) {
        printf("seu IMC e %.2f voce esta acima do peso", IMC);
    } else if( IMC > 29.99 && IMC < 35) {
        printf("seu IMC e %.2f voce esta com obesidade 1", IMC);
    } else if( IMC > 34.99 && IMC < 40) {
        printf("seu IMC e %.2f voce esta com obesidade 2", IMC);
    } else {
        printf("seu IMC e %.2f voce esta com obesidade 3", IMC);
    } 
    
    return 0;
}