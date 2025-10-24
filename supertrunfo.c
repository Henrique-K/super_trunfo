#include <stdio.h>
/*
int pontuacao_1 = 0;
int pontuacao_2 = 0;
void ganhador_int (char name[50],int first,int second);
void ganhador_float (char name[50],float first,float second);
*/
int opcao = 0; 

int main(){

    // Variaveis da primeira carta
    char estado_1 = 'X';
    char codigo_da_carta_1 = '1';
    char nome_da_cidade_1[50] = "Xxxxxx"; 
    unsigned long long int populacao_1 = 1;
    float area_1 = 0; 
    float PIB_1 = 0;
    int numero_de_pontos_turisticos_1 = 0;
    float densidade_populacional_1 = 0;
    float PIB_per_capita_1 = 0;
    float super_poder_1 = 0;

    // variaveis da segunda carta
    char estado_2 = 'X';
    char codigo_da_carta_2 = '2';
    char nome_da_cidade_2[50] = "Xxxxxx"; 
    unsigned long long int populacao_2 = 2;
    float area_2 = 0; 
    float PIB_2 = 0;
    int numero_de_pontos_turisticos_2 = 0;
    double densidade_populacional_2 = 0;
    float PIB_per_capita_2 = 0;
    float super_poder_2 = 0;

    //coleta de informacoes da primeira carta
    //na coleta de informacoes o scanf no terminal nao finalizava no enter quando o "\n" estava no final do printf.
    printf("\n________________________________________________________________________________________\n"); 
    printf("\nCarta 1:\n");
    printf("\nDigite uma letra de 'A' a 'H' para o estado da cidade: ");
    scanf(" %c",&estado_1);
    printf("\nDigite um numero de 1 a 4 para o codigo da carta: ");
    scanf(" %c",&codigo_da_carta_1);
    printf("\nDigite o nome da cidade: ");
    scanf(" %19s",nome_da_cidade_1);
    printf("\nDigite a populacao da cidade: ");
    scanf(" %llu",&populacao_1); 
    printf("\nDigite a area da cidade em km^2: ");
    scanf(" %f",&area_1);
    printf("\nDigite o PIB da cidade: ");
    scanf(" %f",&PIB_1);
    printf("\nDigite o numero de pontos turisticos da cidade: ");
    scanf(" %d",&numero_de_pontos_turisticos_1);
    densidade_populacional_1 = populacao_1 / area_1;
    PIB_per_capita_1 = PIB_1 / populacao_1;
    super_poder_1 = populacao_1 + area_1 + PIB_1 + numero_de_pontos_turisticos_1 + PIB_per_capita_1 - densidade_populacional_1;
    
    //mostragem de informacoes da primeira carta
    printf("\n________________________________________________________________________________________\n\n");
    printf("Carta 1:\n");
    printf("Estado: %c \n", estado_1);
    printf("Codigo: %c0%c\n", estado_1,codigo_da_carta_1);
    printf("Nome da cidade: %s\n", nome_da_cidade_1);
    printf("Populacao: %llu\n",populacao_1);
    printf("Area em Km^2: %.2f\n",area_1);
    printf("PIB: %.2f\n",PIB_1);
    printf("Pontos turisticos: %d\n",numero_de_pontos_turisticos_1);
    printf("Densidade populaciomal: %.2f\n", densidade_populacional_1);
    printf("PIB per capita: %.2f\n", PIB_per_capita_1);
    printf("Super poder: %.2f", super_poder_1);
    
    //coleta de informacoes da segunda carta
    //na coleta de informacoes o scanf no terminal nao finalizava no enter quando o "\n" estava no final do printf.
    printf("\n________________________________________________________________________________________\n");
    printf("\nCarta 2:\n");
    printf("\nDigite uma letra de 'A' a 'H' para o estado da cidade: ");
    scanf(" %c",&estado_2);
    printf("\nDigite um numero de 1 a 4 para o codigo da carta: ");
    scanf(" %c",&codigo_da_carta_2);
    printf("\nDigite o nome da cidade: ");
    scanf(" %19s",nome_da_cidade_2);
    printf("\nDigite a populacao da cidade: ");
    scanf(" %llu",&populacao_2);
    printf("\nDigite a area da cidade em km^2: ");
    scanf(" %f",&area_2);
    printf("\nDigite o PIB da cidade: ");
    scanf(" %f",&PIB_2);
    printf("\nDigite o numero de pontos turisticos da cidade: ");
    scanf(" %d",&numero_de_pontos_turisticos_2);
    densidade_populacional_2 = populacao_2 / area_2;
    PIB_per_capita_2 = PIB_2 / populacao_2;
    super_poder_2 = populacao_2 + area_2 + PIB_2 + numero_de_pontos_turisticos_2 + PIB_per_capita_2 - densidade_populacional_2;
    
    //mostragem de informacoes da segunda carta
    printf("\n________________________________________________________________________________________\n\n");
    printf("Carta 2:\n");
    printf("Estado: %c \n", estado_2);
    printf("Codigo: %c0%c\n", estado_2,codigo_da_carta_2);
    printf("Nome da cidade: %s\n", nome_da_cidade_2);
    printf("Populacao: %llu\n",populacao_2);
    printf("Area em km^2: %.2f\n",area_2);
    printf("PIB: %.2f\n",PIB_2);
    printf("Pontos turisticos: %d\n",numero_de_pontos_turisticos_2);
    printf("Densidade populaciomal: %.2f\n", densidade_populacional_2);
    printf("PIB per capita: %.2f\n", PIB_per_capita_2);
    printf("Super poder: %.2f", super_poder_2);
    printf("\n_______________________________________________________________________________________\n");
    
    //menu interativo
    printf("\n_______________________________________________________________________________________\n");
    printf("Digite 1 se voce quiser ver o nome dos paises\n");
    printf("Digite 2 se voce quiser fazer a comparacao da populacao das cartas\n");
    printf("Digite 3 se voce quiser fazer a comparacao area das cartas\n");
    printf("Digite 4 se voce quiser fazer a comparacao do PIB das cartas\n");
    printf("Digite 5 se voce quiser fazer a comparacao dos pontos turisticos das cartas\n");
    printf("Digite 6 se voce quiser fazer a comparacao da densidade populacional das cartas\n");
    scanf(" %d",&opcao);
    printf("\n_______________________________________________________________________________________\n");
    switch (opcao)
    {
    case 1:
        printf("%s x %s\n",nome_da_cidade_1,nome_da_cidade_2);
        break;
    case 2:
        printf("%s x %s\n",nome_da_cidade_1,nome_da_cidade_2);
        printf("POPULACAO\n\n");
        printf("%s:(%llu)\n",nome_da_cidade_1,populacao_1);
        printf("%s:(%llu)\n",nome_da_cidade_2,populacao_2);
        if(populacao_1>populacao_2){
            printf("%s VENCEU\n",nome_da_cidade_1);
        }else if(populacao_1<populacao_2){
            printf("%s VENCEU\n",nome_da_cidade_2);
        }else {printf("As cartas empataram\n");
        }
        break;
    case 3:
        printf("%s x %s\n",nome_da_cidade_1,nome_da_cidade_2);
        printf("AREA\n\n");
        printf("%s:(%.2f)\n",nome_da_cidade_1,area_1);
        printf("%s:(%.2f)\n",nome_da_cidade_2,area_2);
        if(area_1>area_2){
            printf("%s VENCEU\n",nome_da_cidade_1);
        }else if(area_1<area_2){
            printf("%s VENCEU\n",nome_da_cidade_2);
        }else {printf("As cartas empataram\n");
        }
        break;
    case 4:
        printf("%s x %s\n",nome_da_cidade_1,nome_da_cidade_2);
        printf("PIB\n\n");
        printf("%s:(%.2f)\n",nome_da_cidade_1,PIB_1);
        printf("%s:(%.2f)\n",nome_da_cidade_2,PIB_2);
        if(PIB_1>PIB_2){
            printf("%s VENCEU\n",nome_da_cidade_1);
        }else if(PIB_1<PIB_2){
            printf("%s VENCEU\n",nome_da_cidade_2);
        }else {printf("As cartas empataram\n");
        }
        break;
    case 5:
        printf("%s x %s\n",nome_da_cidade_1,nome_da_cidade_2);
        printf("PONTOS TURISTICOS\n\n");
        printf("%s:(%d)\n",nome_da_cidade_1,numero_de_pontos_turisticos_1);
        printf("%s:(%d)\n",nome_da_cidade_2,numero_de_pontos_turisticos_2);
        if(numero_de_pontos_turisticos_1>numero_de_pontos_turisticos_2){
            printf("%s VENCEU\n",nome_da_cidade_1);
        }else if(numero_de_pontos_turisticos_1<numero_de_pontos_turisticos_2){
            printf("%s VENCEU\n",nome_da_cidade_2);
        }else {printf("As cartas empataram\n");
        }
        break;
    case 6:
        printf("%s x %s\n",nome_da_cidade_1,nome_da_cidade_2);
        printf("DENSIDADE POPULACIONAL\n\n");
        printf("%s:(%.2f)\n",nome_da_cidade_1,densidade_populacional_1);
        printf("%s:(%f.2)\n",nome_da_cidade_2,densidade_populacional_2);
        if(densidade_populacional_2>densidade_populacional_1){
            printf("%s VENCEU\n",nome_da_cidade_1);
        }else if(densidade_populacional_2<densidade_populacional_1){
            printf("%s VENCEU\n",nome_da_cidade_2);
        }else {printf("As cartas empataram\n");
        }    
        break;
    default:
        printf("\nESCOLHA UM NUMERO VALIDO\n");
        break;
    }
    printf("\n_______________________________________________________________________________________\n");
    return 0;
}

/*
    ganhador_int("Populacao",populacao_1,pontuacao_2);
    ganhador_float("Area",area_1,area_2);
    ganhador_float("PIB",PIB_1,PIB_2);
    ganhador_int("Pontos turisticos",numero_de_pontos_turisticos_1,numero_de_pontos_turisticos_2);
    ganhador_float("Densidade populacional",densidade_populacional_1,densidade_populacional_2);
    ganhador_float("PIB per capita",PIB_per_capita_1,PIB_per_capita_2);
    ganhador_int("Super poder",super_poder_1,super_poder_2);
    ganhador_int("Ganhador",pontuacao_1,pontuacao_2);




void ganhador_int (char name[50],int first,int second){
    printf("%s: ",name);
    if (first == second){
    printf("Nenhuma carta venceu\n");
    }else if(first>second){
        printf("Carta 1 venceu\n");
        pontuacao_1++;
        }else{
            printf("Carta 2 venceu\n");
            pontuacao_2++;
            }
};

void ganhador_float (char name[50],float first,float second){
    printf("%s: ",name);
    if (first == second){
    printf("Nenhuma carta venceu\n");
    }else if(first>second){
        printf("Carta 1 venceu\n");
        pontuacao_1++;
        }else{
            printf("Carta 2 venceu\n");
            pontuacao_2++;
            }
};
*/