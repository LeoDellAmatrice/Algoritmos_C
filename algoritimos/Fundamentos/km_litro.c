#include <stdio.h> 

int main(){
    
    float Dis_Perc, KM_L_gas, KM_L_eta, Vlr_L_gas, Vlr_L_eta;

    printf("escreva quantos quilometros tera a viagem: ");
    scanf("%f", &Dis_Perc);
    printf("escreva quantos quilometros por litro de gasolina faz o seu veiculo: ");
    scanf("%f", &KM_L_gas);
    printf("escreva quantos quilometros por litro de etanol faz o seu veiculo: ");
    scanf("%f", &KM_L_eta);
    printf("escreva o valor do litro de gasolina: ");
    scanf("%f", &Vlr_L_gas);
    printf("escreva o valor do litro de etanol: ");
    scanf("%f", &Vlr_L_eta);

    float Vlr_final_gas = (Dis_Perc / KM_L_gas) * Vlr_L_gas;
    float Vlr_final_eta = (Dis_Perc / KM_L_eta) * Vlr_L_eta;

    printf("o gasto em gasolina sera de: %.2f \ne com etanol sera de: %.2f", Vlr_final_gas, Vlr_final_eta);

    return 0;
}
