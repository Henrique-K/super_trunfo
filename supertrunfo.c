#include <stdio.h>

int main(){

    char estado1 = 'X'; //: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    char codigo_da_Carta1 = '0'; //: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
    char nome_da_cidade1[31] = "Nao escolhido"; //: O nome da cidade. Tipo: char[] (string)
    int populacao1 = 0; //: O número de habitantes da cidade. Tipo: int
    float area1 = 0; //(em km²): A área da cidade em quilômetros quadrados. Tipo: float
    float Pib1 = 0; //: O Produto Interno Bruto da cidade. Tipo: float
    int numero_de_pontos_turistico1 = 0; //: A quantidade de pontos turísticos na cidade. Tipo: int
   /*
    printf ("Digite uma letra de 'A' a 'H' para representar o estado:");
    scanf ("%c", &estado1);
    
    printf ("Digite um numero de '1' a '4':");
    scanf ("%c", &codigo_da_Carta1);    
    scanf ("%c", &codigo_da_Carta1);

    printf ("Digite a populacao da cidade:");
    scanf ("%i", &populacao1);
    
    printf ("Digite a area da cidade em Km²:");
    scanf ("%f", &area1);

    printf ("Digite o PIB da cidade:");
    scanf ("%f", &Pib1);

    printf("Digite o numero de pontos turisticos:");
    scanf ("%i", &numero_de_pontos_turistico1);

    printf ("Digite o nome da cidade:");
    scanf ("%s", &nome_da_cidade1);
    */
    printf("\n\n");
    printf("Carta 1: \n");
    printf("Estado: %c \n",&estado1);
    printf("Codigo: %c0%c \n",&estado1, &codigo_da_Carta1);
    printf("Nome da Cidade: %s \n", &nome_da_cidade1);
    printf("Populacao: %i \n", &populacao1);
    printf("Area: %f km² \n", &area1);
    printf("PIB: %f reais \n", &Pib1);
    printf("Numero de Pontos Turisticos: %i \n", &numero_de_pontos_turistico1);

    int end = 2;
    scanf("%i", &end, "/n");
    return 0;
}
