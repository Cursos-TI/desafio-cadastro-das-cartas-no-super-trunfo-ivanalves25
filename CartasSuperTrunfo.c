#include <stdio.h>

int main() {
    
    printf("Desafio Super Trunfo - Países\n");
    char cidade[20], cidade2[20];
    int populacao, populacao2, pontos_turisticos, pontos_turisticos2;
    float area, area2, pib, pib2;
//Cidade 1
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a area da cidade em metros quadrados: ");
    scanf("%f", &area);

    printf("Digite o valor do PIB da cidade em R$: ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &pontos_turisticos);

    printf("Nome da cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %f \n", area);
    printf("PIB: %f \n", pib);
    printf("Quantidade de pontos turísticos: %d \n", pontos_turisticos);

//Cidade 2
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade em metros quadrados: ");
    scanf("%f", &area2);

    printf("Digite o valor do PIB da cidade em R$: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &pontos_turisticos2);

    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Quantidade de pontos turísticos: %d \n", pontos_turisticos2);

    return 0;
}
