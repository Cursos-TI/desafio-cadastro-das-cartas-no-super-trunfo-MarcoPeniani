#include <stdio.h>

int main() {
    // Variáveis para armazenar informações das duas cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2;

    printf("\nCadastro da Carta 1:\n");
    printf("Digite o estado (A-Z): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (ex: A01, A02, A03): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área em km²: ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    // Cálculo de densidade populacional e PIB per capita da Carta 1
    densidade1 = (populacao1 / area1);
    pibpercapita1 = (pib1 / populacao1);

    printf("\nCadastro da Carta 2:\n");
    printf("Digite o estado (A-Z): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (ex: B01, B02, B03): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área em km²: ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    // Cálculo de densidade populacional e PIB per capita da Carta 2
    densidade2 = (populacao2 / area2);
    pibpercapita2 = (pib2 / populacao2);

    // Exibição dos dados formatados
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibpercapita1);

           
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populaciona2: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibpercapita2);

    return 0;
}
