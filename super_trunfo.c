#include <stdio.h>

int main(){

//  Declaração de variáveis. Necessário para a execução do programa  

char letra[1];
char nome[5];
char cidade [30];
int populacao;
float area;
float pib;
int pontos;

char letra2[1];
char nome2[5];
char cidade2 [30];
int populacao2;
float area2;
float pib2;
int pontos_turisticos2;

// Aqui o usuário deverá digitar as informações da primeira carta.
    
printf("Atenção, informações da primeira carta a seguir. \n");
printf("Digite uma letra maiuscula de 'A' a 'H' que represente o Estado: \n");
scanf("%s",&letra);

printf("Digite o código da carta (letra do Estado seguida de um número de 01 a 04): \n");
scanf("%s",&nome);

printf("Digite o nome da cidade: \n");
scanf("%s",&cidade);

printf("Digite o número de habitantes da cidade: \n");
scanf("%d",&populacao);

printf("Digite a área da cidade em quilômetros quadrados: \n");
scanf("%f",&area);

printf("Informe O Produto Interno Bruto da cidade: \n");
scanf("%f",&pib);

printf("Informe a quantidade de pontos turísticos na cidade: \n");
scanf("%d",&pontos);


// Usado para separar a entrada dos dados da primeira carta da entrada dos dados da segunda carta
printf("\n");
printf("\n");

// Aqui o usuário deverá digitar as informações da segunda carta.

printf("Atenção, informações da segunda carta a seguir. \n");
printf("Digite uma letra maiuscula de 'A' a 'H' que represente o Estado: \n");
scanf("%s",&letra2);

printf("Digite o código da carta (letra do Estado seguida de um número de 01 a 04) \n");
scanf("%s",&nome2);

printf("Digite o nome da cidade: \n");
scanf("%s",&cidade2);

printf("Digite o número de habitantes da cidade: \n");
scanf("%d",&populacao2);

printf("Digite a área da cidade em quilômetros quadrados: \n");
scanf("%f",&area2);

printf("Informe O Produto Interno Bruto da cidade \n");
scanf("%f",&pib2);

printf("Informe a quantidade de pontos turísticos na cidade: \n");
scanf("%d",&pontos_turisticos2);

printf("\n");

// Abaixo serão impressas as saidas das informações fornecidas pelo usuário referentes a primeira carta

printf("Estes são os dados da primeira carta: \n");
printf("Estado: %s\n",letra);
printf("Código: %s \n",nome);
printf("Nome da cidade: %s \n",cidade);
printf("População: %d \n",populacao);
printf("Área: %.2f \n",area);
printf("PIB: %.2f \n",pib);
printf("Número de pontos turísticos: %d \n",pontos);

// Usado para separar a saida dos dados da primeira carta da saida dos dados da segunda carta
printf("\n");
printf("\n");

// Abaixo serão impressas as saidas das informações fornecidas pelo usuário referentes a segunda carta

printf("Estes são os dados da segunda carta: \n");
printf("Estado: %s\n",letra2);
printf("Código: %s \n",nome2);
printf("Nome da cidade: %s \n",cidade2);
printf("População: %d \n",populacao2);
printf("Área: %.2f \n",area2);
printf("PIB: %.2f \n",pib2);
printf("Número de pontos turísticos: %d \n",pontos_turisticos2);


}
