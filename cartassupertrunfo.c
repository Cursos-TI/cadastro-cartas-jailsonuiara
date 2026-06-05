#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  char codigo1[20], estado1[20], codigo2[20], estado2[20];
  char cidade1[20], cidade2[20];
  int populacao1, pontos1, pib1, populacao2, pontos2, pib2;
  float area1, densidade1, percapita1, area2, densidade2, percapita2;
  float densidade1 = populacao1 / area1;
  float densidade2 = populacao2 / area2;
  float percapita1 = pib1 / populacao1;
  float percapita2 = pib2 / populacao2;

  printf(" **** SUPER TRUNFO ****\n");
  printf("Digite o código da 1ª carta: \n");
  scanf("%c", &codigo1);

  printf("Digite o estado: \n");
  scanf("%c", &estado1);

  printf("Qual o nome da cidade: \n");
  scanf("%c", &cidade1);

  printf("Qual a população?: \n");
  scanf("%d", &populacao1);

  printf("Qual o PIB: \n");
  scanf("%d", &pib1);

  printf("Quantos pontos turisticos existe?: \n");
  scanf("%d", &pontos1);

  printf("A aréa é?: \n");
  scanf("%f", &area1);

    
  printf(" **************************\n");
  printf("Digite o código da 2º carta: \n");
  scanf("%c", &codigo2);

  printf("Digite o estado: \n");
  scanf("%c", &estado2);

  printf("Qual o nome da cidade: \n");
  scanf("%c", &cidade2);

  printf("Qual a população?: \n");
  scanf("%d", &populacao2);

  printf("Qual o PIB: \n");
  scanf("%d", &pib2);

  printf("Quantos pontos turisticos existe?: \n");
  scanf("%d", &pontos2);

  printf("A aréa é?: \n");
  scanf("%f", &area2);

    
  // printando as informações das cartas
  printf("-------------------------------------\n");
  printf("Código da 1ª carta: %s\n", codigo1);
  printf("Cidade e UF: %s - %s\n", cidade1, estado1);
  printf("PIB: %d | População de: %d | Pontos turisticos de: %d\n", pib1, populacao1, pontos1);
  printf("Com a área de %2.f\n", area1);
  printf("Com a renda percapta de: %2.f\n", percapita1);

  printf("-------------------------------------\n");
  printf("Código da 2ª carta: %s\n", codigo2);
  printf("Cidade e UF: %s - %s\n", cidade2, estado2);
  printf("PIB: %d | População de: %d | Pontos turisticos de: %d\n", pib2, populacao2, pontos2);
  printf("Com a área de %2.f\n", area2);
  printf("Com a renda percapta de: %2.f\n", percapita2);
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

return 0;
} 