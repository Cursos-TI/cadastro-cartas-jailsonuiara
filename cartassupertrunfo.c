#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas

int main() {
    // Declaração de variáveis (sem repetições)
    
    char codigo1[20], estado1[20], codigo2[20], estado2[20];
    char cidade1[20], cidade2[20];
    int populacao1, pontos1, pib1, populacao2, pontos2, pib2;
    float area1, densidade1, percapita1, area2, densidade2, percapita2;

    printf(" **** SUPER TRUNFO ****\n");
    
    // --- LEITURA DA CARTA 1 ---

    printf("Digite o código da 1ª carta: \n");
    scanf(" %s", codigo1); // %s para string, sem o &

    printf("Digite o estado: \n");
    scanf(" %s", estado1);

    printf("Qual o nome da cidade: \n");
    scanf(" %s", cidade1);

    printf("Qual a população?: \n");
    scanf(" %d", &populacao1);

    printf("Qual o PIB: \n");
    scanf(" %d", &pib1);

    printf("Quantos pontos turisticos existe?: \n");
    scanf(" %d", &pontos1);

    printf("A área é?: \n");
    scanf(" %f", &area1);

    
    // --- LEITURA DA CARTA 2 ---

    printf(" **************************\n");
    printf("Digite o código da 2º carta: \n");
    scanf(" %s", codigo2);

    printf("Digite o estado: \n");
    scanf(" %s", estado2);

    printf("Qual o nome da cidade: \n");
    scanf(" %s", cidade2);

    printf("Qual a população?: \n");
    scanf(" %d", &populacao2);

    printf("Qual o PIB: \n");
    scanf(" %d", &pib2);

    printf("Quantos pontos turisticos existe?: \n");
    scanf(" %d", &pontos2);

    printf("A área é?: \n");
    scanf(" %f", &area2);

    
    // --- ÁREA DE CÁLCULOS (Depois que já temos os dados) ---
    // Nota: (float) força o C a fazer uma divisão com casas decimais exatas

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    percapita1 = (float)pib1 / populacao1;
    percapita2 = (float)pib2 / populacao2;

    
    // --- EXIBIÇÃO DOS DADOS ---

    printf("\n-------------------------------------\n");
    printf("Código da 1ª carta: %s\n", codigo1);
    printf("Cidade e UF: %s - %s\n", cidade1, estado1);
    printf("PIB: %d | População de: %d | Pontos turisticos: %d\n", pib1, populacao1, pontos1);
    printf("Área: %.2f\n", area1); // Ajustado para %.2f para mostrar duas casas decimais
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("Renda Per Capita: %.2f\n", percapita1);

    printf("-------------------------------------\n");
    printf("Código da 2ª carta: %s\n", codigo2);
    printf("Cidade e UF: %s - %s\n", cidade2, estado2);
    printf("PIB: %d | População de: %d | Pontos turisticos: %d\n", pib2, populacao2, pontos2);
    printf("Área: %.2f\n", area2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("Renda Per Capita: %.2f\n", percapita2);
    printf("-------------------------------------\n");

    #include <stdio.h>
 

    return 0;
}