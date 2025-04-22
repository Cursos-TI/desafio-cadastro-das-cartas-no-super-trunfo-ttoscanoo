//Desafio nível Aventureiro de Super Trunfo em C: desenvolvendo a lógica do jogo

#include <stdio.h>

int main() {
    // Declaração de Variáveis com valores fixos
    char nomePais1[] = "Brasil";
    int Populacao1 = 211000000; 
    float Area1 = 8510000.0; 
    float PIB1 = 2.174; // trilhões de dólares
    int PontosTuristicos1 = 150;
    float Densidade1 = (float)Populacao1 / Area1;

    char nomePais2[] = "Argentina";
    int Populacao2 = 45000000; 
    float Area2 = 2780000.0;
    float PIB2 = 0.621;
    int PontosTuristicos2 = 170;
    float Densidade2 = (float)Populacao2 / Area2;

    int opcao;

    // Menu interativo
    printf("### Super Trunfo ###\n");
    printf("## Escolha o Atributo de Comparação ##\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Sua opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\nPopulação:\n%s: %d milhões\n%s: %d milhões\n", nomePais1, Populacao1, nomePais2, Populacao2);
            if (Populacao1 > Populacao2) {
                printf("Resultado: %s venceu!\n", nomePais1);
            } else if (Populacao2 > Populacao1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:
            printf("\nÁrea:\n%s: %.2f mil km²\n%s: %.2f mil km²\n", nomePais1, Area1, nomePais2, Area2);
            if (Area1 > Area2) {
                printf("Resultado: %s venceu!\n", nomePais1);
            } else if (Area2 > Area1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            printf("\nPIB:\n%s: %.3f trilhões de dólares\n%s: %.3f trilhões de dólares\n", nomePais1, PIB1, nomePais2, PIB2);
            if (PIB1 > PIB2) {
                printf("Resultado: %s venceu!\n", nomePais1);
            } else if (PIB2 > PIB1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:
            printf("\nPontos Turísticos:\n%s: %d\n%s: %d\n", nomePais1, PontosTuristicos1, nomePais2, PontosTuristicos2);
            if (PontosTuristicos1 > PontosTuristicos2) {
                printf("Resultado: %s venceu!\n", nomePais1);
            } else if (PontosTuristicos2 > PontosTuristicos1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
            printf("\nDensidade Demográfica:\n%s: %.2f hab/km²\n%s: %.2f hab/km²\n", nomePais1, Densidade1, nomePais2, Densidade2);
            // Para densidade, vence quem tem o MENOR valor
            if (Densidade1 < Densidade2) {
                printf("Resultado: %s venceu!\n", nomePais1);
            } else if (Densidade2 < Densidade1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
