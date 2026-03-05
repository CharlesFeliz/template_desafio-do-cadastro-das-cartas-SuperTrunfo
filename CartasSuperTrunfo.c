#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int populacao1,npt1,populacao2,npt2,resultado1,resultado2;
    float area1,pib1,area2,pib2,dp1,dp2,pibc1,pibc2;
    char tipoComparacao1,tipoComparacao2, estado1[20], estado2[20], n_cidade1[20], cod_cidade1[20],n_cidade2[20], cod_cidade2[20];
    
    //Entrando com os dados das cartas

    printf("\n\nBem-vindo ao jogo Super Trunfo!\n");

    printf("\n\nDigite os dados da Carta 01: \n");
    printf("Digite a letra do estado:");
    scanf("%s", &estado1);

    printf("Digite o código da cidade:");
    scanf("%s", &cod_cidade1);

    printf("Digite o nome da cidade:");
    scanf("%s", &n_cidade1);

    printf("Digite o numero da população:");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade:");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade:");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade:");
    scanf("%d", &npt1);

    printf("\n\nDigite os dados da Carta 02: \n");

    printf("Digite a letra do estado:");
    scanf("%s", &estado2);

    printf("Digite o código da cidade:");
    scanf("%s", &cod_cidade2);

    printf("Digite o nome da cidade:");
    scanf("%s", &n_cidade2);

    printf("Digite o numero da população:");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade:");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade:");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade:");
    scanf(" %d", &npt2);

    // Calculos da Carta 01

    dp1=populacao1/area1;
    pibc1=(pib1/populacao1);

    // Calculos da Carta 02

    dp2=populacao2/area2;
    pibc2=(pib2/populacao2);

    //Início do jogo
    
    printf("\n\nVocê deve escolher o primeiro tipo de comparação.\n");
    printf("H. População\n");
    printf("A. Área\n");
    printf("P. PIB\n");
    printf("T. Pontos Turisticos");
    printf("D. Densidade populacional\n");
    printf("C. PIBC\n");
    
    printf("\nEscolha o primeira comparação: ");
    scanf("%s",&tipoComparacao1); 
    
        switch(tipoComparacao1)
    {
        case 'H':
        case 'h':
            printf("Você escolheu a opção População!\n");
            resultado1=populacao1>populacao2 ? 1:0;
            break;
            
        case 'A':
        case 'a':
            printf("Você escolheu a opção Área!\n");
            resultado1=area1>area2 ? 1:0;
            break;
            
        case 'P':
        case 'p':
            printf("Você escolheu a opção PIB!\n");
             resultado1=pib1>pib2 ? 1:0;
            break;
            
        case 'T':
        case 't':
            printf("Você escolheu a opção Pontos Turisticos!\n");
            resultado1=npt1>npt2 ? 1:0;
            break;
            
        case 'D':
        case 'd':
            printf("Você escolheu a opção Densidade populacional!\n");
             resultado1=dp1<dp2 ? 1:0;
            break;
            
        case 'C':
        case 'c':
            printf("Você escolheu a opção PIB por capita!\n");
             resultado1=pibc1>pibc2 ? 1:0;
            break;
            
        default:
            printf("Opção de jogo inválida\n");
            break;
    }
    
    printf("\n\nVocê deve escolher o segundo tipo de comparação.\n");
    printf("H. População\n");
    printf("A. Área\n");
    printf("P. PIB\n");
    printf("T. Pontos Turisticos");
    printf("D. Densidade populacional\n");
    printf("C. PIBC\n");
    
    printf("\nEscolha a segunda comparação: ");
    scanf("%s",&tipoComparacao2); 
        
        if(tipoComparacao1==tipoComparacao2){
        printf ("Você escolheu o mesmo tipo comparação\n");}
        else {
            switch(tipoComparacao2)
    {
        case 'H':
        case 'h':
            printf("Você escolheu a opção População!\n");
            resultado2=populacao1>populacao2 ? 1:0;
            break;
            
        case 'A':
        case 'a':
            printf("Você escolheu a opção Área!\n");
            resultado2=area1>area2 ? 1:0;
            break;
            
        case 'P':
        case 'p':
            printf("Você escolheu a opção PIB!\n");
             resultado2=pib1>pib2 ? 1:0;
            break;
            
        case 'T':
        case 't':
            printf("Você escolheu a opção Pontos Turisticos!\n");
            resultado2=npt1>npt2 ? 1:0;
            break;
            
        case 'D':
        case 'd':
            printf("Você escolheu a opção Densidade populacional!\n");
             resultado2=dp1<dp2 ? 1:0;
            break;
            
        case 'C':
        case 'c':
            printf("Você escolheu a opção PIB por capita!\n");
             resultado2=pibc1>pibc2 ? 1:0;
            break;
            
        default:
            printf("Opção de jogo inválida\n");
            break;
    }
            
        }
    
        printf ("\nComparando as cidades!\n");
    
    if (resultado1&&resultado2){
        printf ("\nA cidade %s é a vencedora\n",n_cidade1);}
        else if (resultado1!=resultado2){
        printf ("\nAs cidades %s e %s empataram!\n",n_cidade1,n_cidade2);}
        else{
            printf ("\nA cidade %s perdeu e a cidade %s ganhou!\n",n_cidade1,n_cidade2);
        }
    
return 0;
}