#include <stdio.h>

int main() {
    
    printf("Desafio Super Trunfo - Países\n");
    char cidade[20];
    int populacao, pontos_turisticos;
    float area, pib;

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

    return 0;
}
