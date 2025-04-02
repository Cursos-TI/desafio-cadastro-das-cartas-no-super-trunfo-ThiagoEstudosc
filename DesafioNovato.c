#include <stdio.h>

int main() {

    //Declaração de variáveis:
    char estado, estado2;
    char codigo[4], codigo2[4];
    char cidade[50], cidade2[50];
    int populacao, populacao2;
    float area, area2, PIB, PIB2;
    int pontosTuristicos, pontosTuristicos2;

    //Entrada de dados para a Carta 1:
    printf("Digite o estado da Carta 1: \n");
    scanf("%c", &estado);
    
    printf("Digite o código da Carta 1: \n");
    scanf("%s", &codigo);
    
    printf("Digite o nome da cidade da Carta 1: \n");
    scanf("%s", &cidade);
    
    printf("Digite a população da cidade da Carta 1: \n");
    scanf("%d", &populacao);
    
    printf("Digite a área da cidade da Carta 1 em km²: \n");
    scanf("%f", &area);
    
    printf("Digite o PIB da cidade da Carta 1: \n");
    scanf("%f", &PIB);
    
    printf("Digite o número de pontos turísticos da cidade da Carta 1: \n");
    scanf("%d", &pontosTuristicos);

    //Entrada de dados para a Carta 2:
    printf("\nDigite o estado da Carta 2: \n");
    scanf(" %c", &estado2);
    
    printf("Digite o código da Carta 2): \n");
    scanf("%s", &codigo2);
    
    printf("Digite o nome da cidade da Carta 2: \n");
    scanf("%s", &cidade2);
    
    printf("Digite a população da cidade da Carta 2: \n");
    scanf("%d", &populacao2);
    
    printf("Digite a área da cidade da Carta 2 em km²: \n");
    scanf("%f", &area2);
    
    printf("Digite o PIB da cidade da Carta 2: \n");
    scanf("%f", &PIB2);
    
    printf("Digite o número de pontos turísticos da cidade da Carta 2: \n");
    scanf("%d", &pontosTuristicos2);

    //Exibição dos dados cadastrados:
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}