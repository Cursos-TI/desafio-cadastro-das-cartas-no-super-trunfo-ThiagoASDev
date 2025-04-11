#include <stdio.h>


int main() {
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    // Leitura da primeira carta
    printf("Populacao da carta 1: \n");
    scanf("%d", &populacao1);

    printf("Area da carta 1: \n");
    scanf("%f", &area1);

    printf("PIB da carta 1: \n");
    scanf("%f", &pib1);

    printf("Pontos turísticos da carta 1: \n");
    scanf("%d", &pontos1);

    // Leitura da segunda carta
    printf("Populacao da carta 2: \n");
    scanf("%d", &populacao2);

    printf("Area da carta 2: \n");
    scanf("%f", &area2);

    printf("PIB da carta 2: \n");
    scanf("%f", &pib2);

    printf("Pontos turísticos da carta 2: \n");
    scanf("%d", &pontos2);

    // Exibição dos dados
    printf("Carta 1:\n");
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);

    printf("Carta 2:\n");
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);

    return 0;
}
