#include <stdio.h>
int main(){

    // Variaveis da primeira carta
    char Estado_0 = 'Y';
    char Código_da_Carta_0 = '0';
    char Nome_da_Cidade_0[30] = "ZZZ"; 
    int População_0 = 0;
    float Área_0 = 0.01; 
    float PIB_0 = 0.01;
    int Número_de_Pontos_Turísticos_0 = 0;

    // variaveis da segunda carta
    char Estado_1 = 'Y';
    char Código_da_Carta_1 = '0';
    char Nome_da_Cidade_1[30] = "ZZZ"; 
    int População_1 = 0;
    float Área_1 = 0.01; 
    float PIB_1 = 0.01;
    int Número_de_Pontos_Turísticos_1 = 0;
   
    //coleta de informacoes da primeira carta
    //na coleta de informaçoes o scanf no terminal nao finalizava no enter quando o "\n" estava no final do printf.
    printf("\n________________________________________________________________________________________\n"); 
    printf("\nCarta 1:\n");
    printf("\nDígite uma letra de 'A' a 'H' para o estado da cidade:");
    scanf(" %c",&Estado_0);
    printf("\nDígite um número de 1 a 4 para o código da carta:");
    scanf(" %c",&Código_da_Carta_0);
    printf("\nDígite o nome da cidade:");
    scanf(" %s",&Nome_da_Cidade_0);
    printf("\nDígite a população da cidade:");
    scanf(" %d",&População_0); 
    printf("\nDígite a área da cidade:");
    scanf(" %f",&Área_0);
    printf("\nDígite o PIB da cidade:");
    scanf(" %f",&PIB_0);
    printf("\nDígite o número de pontos turísticos da cidade:");
    scanf(" %d",&Número_de_Pontos_Turísticos_0);
    
    //mostragem de informacoes da primeira carta
    printf("\n________________________________________________________________________________________\n\n");
    printf("Carta 1:\n");
    printf("Estado: %c \n", Estado_0);
    printf("Código: %c0%c\n", Estado_0,Código_da_Carta_0);
    printf("Nome da cidade: %s\n", Nome_da_Cidade_0);
    printf("População: %d\n",População_0);
    printf("Área: %.2f\n",Área_0);
    printf("PIB: %.2f\n",PIB_0);
    printf("Pontos turísticos: %d\n",Número_de_Pontos_Turísticos_0);

    //coleta de informacoes da segunda carta
    //na coleta de informaçoes o scanf no terminal nao finalizava no enter quando o "\n" estava no final do printf.
    printf("\n________________________________________________________________________________________\n");
    printf("\nCarta 2:\n");
    printf("\nDígite uma letra de 'A' a 'H' para o estado da cidade:");
    scanf(" %c",&Estado_1);
    printf("\nDígite um número de 1 a 4 para o código da carta:");
    scanf(" %c",&Código_da_Carta_1);
    printf("\nDígite o nome da cidade:");
    scanf(" %s",&Nome_da_Cidade_1);
    printf("\nDígite a população da cidade:");
    scanf(" %d",&População_1);
    printf("\nDígite a área da cidade:");
    scanf(" %f",&Área_1);
    printf("\nDígite o PIB da cidade:");
    scanf(" %f",&PIB_1);
    printf("\nDígite o número de pontos turísticos da cidade:");
    scanf(" %d",&Número_de_Pontos_Turísticos_1);
    
    //mostragem de informacoes da segunda carta
    printf("\n________________________________________________________________________________________\n\n");
    printf("Carta 2:\n");
    printf("Estado: %c \n", Estado_1);
    printf("Código: %c0%c\n", Estado_1,Código_da_Carta_1);
    printf("Nome da cidade: %s\n", Nome_da_Cidade_1);
    printf("População: %d\n",População_1);
    printf("Área: %.2f\n",Área_1);
    printf("PIB: %.2f\n",PIB_1);
    printf("Pontos turísticos: %d\n",Número_de_Pontos_Turísticos_1);
    


    printf("\n_______________________________________________________________________________________\n");
    return 0;
}