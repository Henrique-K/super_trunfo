#include <stdio.h>
int main(){

    // Variaveis da primeira carta
    char estado_0 = 'X';
    char codigo_da_carta_0 = '0';
    char nome_da_cidade_0[30] = "Xx"; 
    int populacao_0 = 0;
    float area_0 = 0.01; 
    float PIB_0 = 0.01;
    int numero_de_pontos_turisticos_0 = 0;
    float densidade_populacional_0 = 0;
    float PIB_per_capita_0 = 0;

    // variaveis da segunda carta
    char estado_1 = 'X';
    char codigo_da_carta_1 = '0';
    char nome_da_cidade_1[30] = "Xx"; 
    int populacao_1 = 0;
    float area_1 = 0.01; 
    float PIB_1 = 0.01;
    int numero_de_pontos_turisticos_1 = 0;
    float densidade_populacional_1 = 0;
    float PIB_per_capita_1 = 0;

    //coleta de informacoes da primeira carta
    //na coleta de informacoes o scanf no terminal nao finalizava no enter quando o "\n" estava no final do printf.
    printf("\n________________________________________________________________________________________\n"); 
    printf("\nCarta 1:\n");
    printf("\nDigite uma letra de 'A' a 'H' para o estado da cidade:");
    scanf(" %c",&estado_0);
    printf("\nDigite um numero de 1 a 4 para o codigo da carta:");
    scanf(" %c",&codigo_da_carta_0);
    printf("\nDigite o nome da cidade:");
    scanf(" %s",&nome_da_cidade_0);
    printf("\nDigite a populacao da cidade:");
    scanf(" %d",&populacao_0); 
    printf("\nDigite a area da cidade:");
    scanf(" %f",&area_0);
    printf("\nDigite o PIB da cidade:");
    scanf(" %f",&PIB_0);
    printf("\nDigite o numero de pontos turisticos da cidade:");
    scanf(" %d",&numero_de_pontos_turisticos_0);
    densidade_populacional_0 = populacao_0 / area_0;
    PIB_per_capita_0 = PIB_0 / populacao_0;
    
    //mostragem de informacoes da primeira carta
    printf("\n________________________________________________________________________________________\n\n");
    printf("Carta 1:\n");
    printf("Estado: %c \n", estado_0);
    printf("Codigo: %c0%c\n", estado_0,codigo_da_carta_0);
    printf("Nome da cidade: %s\n", nome_da_cidade_0);
    printf("Populacao: %d\n",populacao_0);
    printf("area: %.2f\n",area_0);
    printf("PIB: %.2f\n",PIB_0);
    printf("Pontos turisticos: %d\n",numero_de_pontos_turisticos_0);
    printf("Densidade populaciomal: %.2f\n", densidade_populacional_0);
    printf("PIB per capita: %.2f\n", PIB_per_capita_0);

    //coleta de informacoes da segunda carta
    //na coleta de informacoes o scanf no terminal nao finalizava no enter quando o "\n" estava no final do printf.
    printf("\n________________________________________________________________________________________\n");
    printf("\nCarta 2:\n");
    printf("\nDigite uma letra de 'A' a 'H' para o estado da cidade:");
    scanf(" %c",&estado_1);
    printf("\nDigite um numero de 1 a 4 para o codigo da carta:");
    scanf(" %c",&codigo_da_carta_1);
    printf("\nDigite o nome da cidade:");
    scanf(" %s",&nome_da_cidade_1);
    printf("\nDigite a populacao da cidade:");
    scanf(" %d",&populacao_1);
    printf("\nDigite a area da cidade:");
    scanf(" %f",&area_1);
    printf("\nDigite o PIB da cidade:");
    scanf(" %f",&PIB_1);
    printf("\nDigite o numero de pontos turisticos da cidade:");
    scanf(" %d",&numero_de_pontos_turisticos_1);
    densidade_populacional_1 = populacao_1 / area_1;
    PIB_per_capita_1 = PIB_1 / populacao_1;
     
    //mostragem de informacoes da segunda carta
    printf("\n________________________________________________________________________________________\n\n");
    printf("Carta 2:\n");
    printf("Estado: %c \n", estado_1);
    printf("Codigo: %c0%c\n", estado_1,codigo_da_carta_1);
    printf("Nome da cidade: %s\n", nome_da_cidade_1);
    printf("Populacao: %d\n",populacao_1);
    printf("area: %.2f\n",area_1);
    printf("PIB: %.2f\n",PIB_1);
    printf("Pontos turisticos: %d\n",numero_de_pontos_turisticos_1);
    printf("Densidade populaciomal: %.2f\n", densidade_populacional_1);
    printf("PIB per capita: %.2f\n", PIB_per_capita_1);
    


    printf("\n_______________________________________________________________________________________\n");
    return 0;
}