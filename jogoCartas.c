#include<stdio.h>
#include<stdlib.h>


int main() {

    printf("------------------------------------------------------------------------\n");
    printf("------------------------------------------------------------------------\n");
    printf("Jogo Super Trunfo de Paises\n");
    printf("Um sistema para cadastrar as cartas com informacoes sobre as cidades.\n");
    printf("Ex: Digite: \nCarta: X \nEstado: X\nCodigo: X01\nNome da Cidade: ----\nPopulacao: *******\nArea: ***** km\nPIB: ****** bilhoes de reais\nNumero de Pontos Turisticos: **" );
    printf("\n------------------------------------------------------------------------");
    printf("\n------------------------------------------------------------------------");
    printf("\nIniciando o jogo\n");
    printf("\n");
    // Var da Carta 
    char estado1 [3];
    char codigo1[10];
    char cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1;
    float superPoder1;

    // Var Carta 2
    char estado2[3];
    char codigo2[10];
    char cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2;
    float superPoder2;

    int resultadoPopulacao, resultadoArea, resultadoPib, resultadoPibPerCapita, 
    resultadoPontosTuristicos, resultadoDensidade, resultadoSuperPoder;
    
    int resultadoPopulacao2, resultadoArea2, resultadoPib2, resultadoPibPerCapita2, 
    resultadoPontosTuristicos2, resultadoDensidade2, resultadoSuperPoder2;


    // carta 1
    printf("Carta 1:\n");
    printf("Estado: ");
    scanf(" %2s", &estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

     //calulo densidade | pib per capita | super poder
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1e9) / populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + pibPerCapita1 + pontosTuristicos1 + (1.0 / densidade1);
    
    
    // carta 2
    printf("\nCarta 2:\n");
    printf("Estado: ");
    scanf(" %2s", &estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    //calulo densidade | pib per capita | super poder
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib1 * 1e9) / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + pibPerCapita2 + pontosTuristicos2 + (1.0 / densidade2);


    //CARTA 1
    printf("\n--- Resultados ---\n\n");
    printf("Carta 1:\n");
    printf("Estado: %2s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder Carta 1: %.2f\n", superPoder1);

    // CARTA 2
    printf("\nCarta 2:\n");
    printf("Estado: %2s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder Carta 2: %.2f\n", superPoder2);


   
    //resultado comparacao carta 1 e 2
    resultadoPopulacao = populacao1 > populacao2;
    resultadoArea = area1 > area2;
    resultadoPib = pib1 > pib2;
    resultadoPibPerCapita = pibPerCapita1 > pibPerCapita2;
    resultadoPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
    resultadoDensidade = densidade1 < densidade2; // menor densidade vence o game
    resultadoSuperPoder= superPoder1 > superPoder2;
   
    // RESULTADO DE COMPARACAO CARTAS
    printf("\n--- Vencedor ---\n\n");

    printf("Populacão: Carta %d Venceu (%d)\n", (resultadoPopulacao ? 1 : 2), resultadoPopulacao);
    printf("Area: Carta %d Venceu (%d)\n", (resultadoArea ? 1 : 2), resultadoArea);
    printf("PIB: Carta %d Venceu (%d)\n", (resultadoPib ? 1 : 2), resultadoPib);
    printf("PIB per Capita: Carta %d Venceu (%d)\n", (resultadoPibPerCapita ? 1 : 2), resultadoPibPerCapita);
    printf("Numero de Pontos Turisticos: Carta %d Venceu (%d)\n", (resultadoPontosTuristicos ? 1 : 2), resultadoPontosTuristicos);
    printf("Densidade Populacional: Carta %d Venceu (%d)\n", (resultadoDensidade ? 1 : 2), resultadoDensidade);
    printf("Super Poder: Carta %d Venceu (%d)\n", (resultadoSuperPoder ? 1 : 2), resultadoSuperPoder);

    return 0;
}