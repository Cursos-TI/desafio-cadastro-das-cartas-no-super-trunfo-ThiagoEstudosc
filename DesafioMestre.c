#include <stdio.h>

int main() {

    //Declaração de variáveis:
    char estado, estado2;
    char codigo[4], codigo2[4];
    char cidade[50], cidade2[50];
    int populacao, populacao2;
    float area, area2, PIB, PIB2;
    int pontosTuristicos, pontosTuristicos2;
    float densidade, densidade2, PIBporcapital, PIBporcapital2;
    float superPoder, superPoder2;
    int vitoriaPopulacao, vitoriaArea, vitoriaPIB, vitoriaTurismo, vitoriaDensidade, vitoriaPIBperCapita, vitoriaSuperPoder;

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

    //Cálculo da densidade populacional e do PIB por capital:
    densidade = populacao / area;
    densidade2 = populacao2 / area2;
    PIBporcapital = PIB / populacao;
    PIBporcapital2 = PIB2 / populacao2;

    //Cálculo do Super Poder:
    superPoder = populacao + area + PIB + pontosTuristicos + PIBporcapital + (1 / densidade);
    superPoder2 = populacao2 + area2 + PIB2 + pontosTuristicos2 + PIBporcapital2 + (1 / densidade2);

    //Exibição dos dados cadastrados:
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("PIB per Capita: %.2f em reais\n", PIBporcapital);
    
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("PIB per Capita: %.2f reais\n\n", PIBporcapital2);

    //Exibição dos resultados:
    printf("Comparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", vitoriaPopulacao ? 1 : 0, vitoriaPopulacao);
    printf("Área: Carta %d venceu (%d)\n", vitoriaArea ? 1 : 0, vitoriaArea);
    printf("PIB: Carta %d venceu (%d)\n", vitoriaPIB ? 1 : 0, vitoriaPIB);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", vitoriaTurismo ? 1 : 0, vitoriaTurismo);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", vitoriaDensidade ? 1 : 0, vitoriaDensidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", vitoriaPIBperCapita ? 1 : 0, vitoriaPIBperCapita);
    printf("Super Poder: Carta %d venceu (%d)\n", vitoriaSuperPoder ? 1 : 0, vitoriaSuperPoder);
    
    return 0;
}