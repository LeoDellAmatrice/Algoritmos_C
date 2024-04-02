#include <stdio.h>

int main()
{
    int temp;

    printf("digite o valor da temperatura: ");
    scanf("%i", &temp);

    if (temp <= 13)
    {
        printf("frio");
    }
    else if (temp <= 25)
    {
        printf("agradavel");
    }
    else if (temp <= 32)
    {
        printf("calor");
    }
    else
    {
        printf("muito calor");
    }

    return 0;
}
