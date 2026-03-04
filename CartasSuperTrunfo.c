#include <stdio.h>

int main() 
{
int populacao1,npt1,populacao2,npt2;
float area1,pib1,area2,pib2,dp1,dp2,pibc1,pibc2;
char estado1[20],estado2[20],n_cidade1[20], cod_cidade1[20],n_cidade2[20], cod_cidade2[20];

printf("\n\nCarta 01: \n");
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

printf("\n\nCarta 02: \n");

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

printf("\n\nCarta 01: \n");

printf("O estado: %s\n", estado1);
printf("O código da cidade: %s\n", cod_cidade1);
printf("O nome da cidade é: %s\n", n_cidade1);
printf("A população é: %d habitantes\n", populacao1);
printf("A área é: %.2f km²\n", area1);
printf("O PIB é: %.2f bilhões de reais\n", pib1);
printf("O número de pontos turísticos: %d\n", npt1);
dp1=populacao1/area1;
pibc1=(pib1/populacao1)*1000;
printf("A densidade populacional é: %.2f hab./km2\n", dp1);
printf("O PIB per Capita é: %.4f milhões de reais\n", pibc1);

printf("\n\nCarta 02: \n");

printf("O estado: %s\n", estado2);
printf("O código da cidade: %s\n", cod_cidade2);
printf("O nome da cidade é: %s\n", n_cidade2);
printf("A população é: %d habitantes\n", populacao2);
printf("A área é: %.2f km²\n", area2);
printf("O PIB é: %.2f bilhões de reais\n", pib2);
printf("O número de pontos turísticos: %d\n", npt2);
dp2=populacao2/area2;
pibc2=(pib2/populacao2)*1000;
printf("A densidade populacional é: %.2f hab./km2\n", dp2);
printf("O PIB per Capita é: %.4f milhões de reais\n", pibc2);

printf("\n\nComparando as Cartas \n");

if (dp1<dp2){
    printf ("A densidade populacional da cidade %s é a vencedora\n",n_cidade1);}
    if (dp1>dp2){
        printf ("A densidade populacional da cidade %s é a vencedora\n",n_cidade2);}
        else{
            printf ("As densidades populacionais das cidades %s e %s são iguais - Empatou !\n",n_cidade1,n_cidade2);}
            
if (populacao1>populacao2){
    printf ("A população da cidade %s é a vencedora\n",n_cidade1);}
    if(populacao1<populacao2){
        printf ("A população da cidade %s é a vencedora\n",n_cidade2);}
        else{
            printf ("As populações das cidades %s e %s são iguais - Empatou !\n",n_cidade1,n_cidade2);}
            
if (area1>area2){
    printf ("A área da cidade %s é a vencedora\n",n_cidade1);}
    if (area1<area2){
        printf ("A área da cidade %s é a vencedora\n",n_cidade2);}
        else{
            printf ("As áreas das cidades %s e %s são iguais - Empatou !\n",n_cidade1,n_cidade2);}
            
if (pib1>pib2){
    printf ("O PIB da cidade %s é a vencedora\n",n_cidade1);}
    if(pib1<pib2){
        printf ("O PIB da cidade %s é a vencedora\n",n_cidade2);}
        else{
            printf ("Os PIBs das cidades %s e %s são iguais - Empatou !\n",n_cidade1,n_cidade2);} 
            
if (pibc1>pibc2){
    printf ("O PIB per capito da %s é a vencedora\n",n_cidade1);}
    if (pibc1<pibc2){
        printf ("O PIB per capito da %s é a vencedora\n",n_cidade2);}
        else{
            printf ("Os PIBs per capito das cidades %s e %s são iguais - Empatou !\n",n_cidade1,n_cidade2);}
    
if (npt1>npt2){
    printf ("A cidade %s é a vencedora, possui o maior numero de pontos turisticos\n",n_cidade1);}
    if (npt1<npt2) {
        printf ("A cidade %s é a vencedora, possui o maior numero de pontos turisticos\n",n_cidade2);}
        else{
            printf ("As cidades %s e %s, possuem o mesmo numero de pontos turisticos - Empatou !\n",n_cidade1,n_cidade2);}
return 0;

}