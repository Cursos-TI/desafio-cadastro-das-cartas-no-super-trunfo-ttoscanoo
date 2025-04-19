#include <stdio.h>

int main() {
    // Declaração das variáveis para a carta 1
    char estado1;
    char codigo1[4];  // Ex: A01
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1; //novas variáveis do nível aentureiro
    float pibpc1;
    float inversoDensidade1; //novas variáveis do nível mestre
    float superPoder1;

    // Declaração das variáveis para a carta 2
    char estado2;
    char codigo2[4];  // Ex: B02
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2; 
    float pibpc2;
    float inversoDensidade2;
    float superPoder2;

    // Instruções para o usuário e entrada dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (letra de A a H): \n");
    scanf(" %c", &estado1); 

    printf("Digite o código da carta (ex: A01): \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade1);

    printf("Digite a população: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área (em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB (em milhões de reais): \n");
    scanf("%f", &pib1);
    pib1 = pib1 * 1000000; //Transforma o pib em milhões

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    // Instruções para o usuário e entrada dos dados da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o estado (letra de A a H): \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: B03): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade2);

    printf("Digite a população: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB (em milhões de reais): \n");
    scanf("%f", &pib2);
    pib2 = pib2 * 1000000; //Transforma o pib em milhões

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    //Cálculo Densidade Populacional e PIB per Capita

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibpc1 = pib1 / populacao1;
    pibpc2 = pib2 / populacao2;

    //Cáculo do Super Poder
    inversoDensidade1 = 1 / densidade1;
    inversoDensidade2 = 1 / densidade2;

    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibpc1 + inversoDensidade1;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibpc2 + inversoDensidade2;

    // Impressão dos dados das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f \n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pibpc1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pibpc2);

    // Comparação das cartas
    printf("\nComparação de Cartas:\n");
    
    if (populacao1 > populacao2){
        printf("População: Carta 1 venceu (1)\n");
    } else {
        printf("População: Carta 2 venceu (0)\n");
    }
    
    if (area1 > area2){
        printf("Área: Carta 1 venceu (1)\n");
    } else {
        printf("Área: Carta 2 venceu (0)\n");
    }

    if (pib1 > pib2){
        printf("PIB: Carta 1 venceu (1)\n");
    } else {
        printf("PIB: Carta 2 venceu (0)\n");
    }
    
    if (pontosTuristicos1 > pontosTuristicos2){
        printf("Pontos Turisticos: Carta 1 venceu (1)\n");
    } else {
        printf("Pontos Turisticos: Carta 2 venceu (0)\n");
    }
    
    if (inversoDensidade1 > inversoDensidade2){
        printf("Menor densidade Populacional: Carta 1 venceu (1)\n");
    } else {
        printf("Menor densidade Populacional: Carta 2 venceu (0)\n");
    }

    if (pibpc1 > pibpc2){
        printf("PIB per capita: Carta 1 venceu (1)\n");
    } else {
        printf("PIB per capita: Carta 2 venceu (0)\n");
    }
    
    if (superPoder1 > superPoder2){
        printf("Super Poder: Carta 1 venceu (1)\n");
    } else {
        printf("Super Poder: Carta 2 venceu (0)\n");
    }
    
    return 0;
}