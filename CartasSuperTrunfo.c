#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    printf("------------------------------------------------------------------------\n");
    printf("------------------------------------------------------------------------\n");
    printf("Jogo Super Trunfo de Paises\n");
    printf("Um sistema para cadastrar as cartas com informacoes sobre as cidades.\n");
    printf("Ex: Digite: \nCarta: X \nEstado: X\nCodigo: X01\nNome da Cidade: Sao Paulo\nPopulacao: 12325000\nArea: 1521.11 km\nPIB: 699.28 bilhoes de reais\nNumero de Pontos Turisticos: 50" );
    printf("\n------------------------------------------------------------------------");
    printf("\n------------------------------------------------------------------------");
    printf("\n");
    printf("\nIniciando o jogo\n");

    char carta1[2], carta2 [2];
    char codigo1[5], codigo2[5];
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontoTuristico1, pontoTuristico2;


    //PRIMEIRA CARTA
    printf("Carta 01:");
    scanf("%s", carta1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    fflush(stdin);
    scanf("%[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontoTuristico1);

    //SEGUNDA CARTA
    printf("\nCarta 02:");
    scanf("%s", carta2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    fflush(stdin);
    scanf("%[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontoTuristico2);

    printf("\n------------------------------------------------------------------------\n");
    printf("------------------------------------------------------------------------\n");
    printf("                              CARTA - 01                                 \n");
    printf("Carta: %s\n", carta1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", &pontoTuristico1);
    printf("\n------------------------------------------------------------------------\n");
    printf("\n------------------------------------------------------------------------\n");
    printf("                              CARTA - 02                                 \n");
    printf("Carta: %s\n", carta2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", &pontoTuristico2);
    printf("\n------------------------------------------------------------------------");
    printf("\n------------------------------------------------------------------------");
    
    return 0;
}
