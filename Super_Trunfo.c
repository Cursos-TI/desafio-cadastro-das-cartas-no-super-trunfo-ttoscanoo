#include <stdio.h>

int main(){

     //Variáveis das cartas
    char nomePais1[10], nomePais2[10];
    unsigned long int Populacao1, Populacao2;
    float Area1, Area2;
    float PIB1 , PIB2;
    int PontosTuristicos1, PontosTuristicos2;


    printf("### SUPER TRUNFO ###\n");

    printf("Cadastro de Cartas:\n");
    printf("Digite o nome do país da Carta 1: ");
    scanf(" %s", nomePais1);
    printf("Digite a população da Carta 1: ");
    scanf(" %lu", &Populacao1);
    printf("Digite a área da Carta 1 (mil km²): ");
    scanf(" %f", &Area1);
    printf("Digite o PIB da Carta 1 (trilhões de dólares): ");
    scanf(" %f", &PIB1);
    printf("Digite o número de pontos turísticos da Carta 1: ");
    scanf(" %d", &PontosTuristicos1);
    float Densidade1 = Populacao1 / Area1;

    printf("\nDigite o nome do país da Carta 2: ");
    scanf(" %s", nomePais2);
    printf("Digite a população da Carta 2 (milhões): ");
    scanf(" %lu", &Populacao2);
    printf("Digite a área da Carta 2 (mil km²): ");
    scanf(" %f", &Area2);
    printf("Digite o PIB da Carta 2 (trilhões de dólares): ");
    scanf(" %f", &PIB2);
    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf(" %d", &PontosTuristicos2);
    float Densidade2 = Populacao2 / Area2;
    
    //Escolha de atributos para comparação
    
    int atributo1, atributo2;
    int resultado1, resultado2;

    printf("\nEscolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");  
    printf("Sua opção: ");
    scanf("%d", &atributo1);

    // Menu dinâmico para o segundo atributo
    printf("\nEscolha o segundo atributo para comparar:\n");
    switch (atributo1) {
        case 1:
            printf("2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n");
            break;
        case 2:
            printf("1 - População\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n");
            break;
        case 3:
            printf("1 - População\n2 - Área\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n");
            break;
        case 4:
            printf("1 - População\n2 - Área\n3 - PIB\n5 - Densidade Demográfica\n");
            break;
        case 5:
            printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n");
            break;
        default:
            printf("Opção inválida para o primeiro atributo!\n");
            return 1;
    }
    printf("Sua opção: ");
    scanf("%d", &atributo2);

    // Verifica se o usuário escolheu o mesmo atributo
    if (atributo1 == atributo2 || atributo2 > 5 || atributo2 < 1){ 
        printf("Erro: Lembre de escolher um atributo diferente entre as opções.\n");
        return 1;
    }

    //Comparação dos atributos
    printf("\n**Comparação de Atributos:**\n");
    switch (atributo1){
        case 1:
            printf("\nPopulação:\n %s: %lu milhões X %s: %lu milhões\n", nomePais1, Populacao1, nomePais2, Populacao2);
            resultado1 = Populacao1 > Populacao2;
            break;
        case 2:
            printf("\nÁrea:\n%s: %.2f mil km² X %s: %.2f mil km²\n", nomePais1, Area1, nomePais2, Area2);
            resultado1 = Area1 > Area2;
            break;
        case 3:
            printf("\nPIB:\n%s: %.3f trilhões de dólares X %s: %.3f trilhões de dólares\n", nomePais1, PIB1, nomePais2, PIB2);
            resultado1 = PIB1 > PIB2;
            break;
        case 4:
            printf("\nPontos Turísticos:\n%s: %d X %s: %d\n", nomePais1, PontosTuristicos1, nomePais2, PontosTuristicos2);
            resultado1 = PontosTuristicos1 > PontosTuristicos2;
            break;
        case 5:
            printf("\nDensidade Demográfica:\n%s: %.2f habitantes/km² X %s: %.2f habitantes/km²\n", nomePais1, Densidade1, nomePais2, Densidade2);
            resultado1  = Densidade1 < Densidade2; // Para densidade, vence quem tem o MENOR valor
            break;
    }
    
    //Comparação do segundo atributo
    switch (atributo2){
        case 1:
            printf("\nPopulação:\n%s: %lu milhões X %s: %lu milhões\n", nomePais1, Populacao1, nomePais2, Populacao2);
            resultado2 = Populacao1 > Populacao2;
            break;
        case 2:
            printf("\nÁrea:\n%s: %.2f mil km² X %s: %.2f mil km²\n", nomePais1, Area1, nomePais2, Area2);
            resultado2 = Area1 > Area2;
            break;
        case 3:
            printf("\nPIB:\n%s: %.3f trilhões de dólares X %s: %.3f trilhões de dólares\n", nomePais1, PIB1, nomePais2, PIB2);
            resultado2 = PIB1 > PIB2;
            break;
        case 4:
            printf("\nPontos Turísticos:\n%s: %d X %s: %d\n", nomePais1, PontosTuristicos1, nomePais2, PontosTuristicos2);
            resultado2 = PontosTuristicos1 > PontosTuristicos2;
            break;
        case 5:
            printf("\nDensidade Demográfica:\n%s: %.2f habitantes/km² X %s: %.2f habitantes/km²\n", nomePais1, Densidade1, nomePais2, Densidade2);
            resultado2 = Densidade1 < Densidade2; // Para densidade, vence quem tem o MENOR valor
            break;
        default:
            break;
    }

    //Resultado da comparação
    if (resultado1 && resultado2){
        printf("\n***Resultado: %s VENCEU!***\n", nomePais1);
    } else if (resultado1 != resultado2){
        printf("\n***Resultado: EMPATE! %s e %s empataram nos atributos escolhidos.***\n", nomePais1, nomePais2);
    } else {
        printf("\n****Resultado: %s VENCEU!***\n", nomePais2);
    }

    //FIM
    printf("\n\n### FIM DO JOGO ###\n\n");
    return 0;   
    

}




