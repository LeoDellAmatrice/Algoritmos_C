#include <stdio.h>

int main()
{
    char cocacola[] = "Coca Cola";
    char mentos[] = "Mentos";
    char doce[] = "chocolate";

    float V_coca = 9.99;
    float V_mentos = 3.99;
    float V_doce = 2.99;

    float Total_Lista = V_doce + V_coca + V_mentos;

    printf("Valor total da compra: %.2f", Total_Lista);
    
    return 0;
}
