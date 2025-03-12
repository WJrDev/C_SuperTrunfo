#include<stdio.h>

int Main()
{
    //Parametros da Primeira Carta

    char c1Estado;
    char c1Codigo[3];
    char c1UF[2];
    int c1Populacao;
    float c1Area;
    float c1PIB;
    int c1NumeroDePontosTuristicos;

    //Parametros da Segunda Carta

    char c2Estado;
    char c2Codigo[3];
    char c2UF[2];
    int c2Populacao;
    float c2Area;
    float c2PIB;
    int c2NumeroDePontosTuristicos;

    printf("Escolha Os Parametros Da Primeira Carta!\n");

    printf("Estado ");
    scanf("%c\n", &c1Estado);

    printf("Codigo ");
    scanf("%s\n", c1Codigo);

    printf("UF ");
    scanf("%s\n", c1UF);

    printf("Populacao ");
    scanf("%i\n", &c1Populacao);
    
    printf("Area ");
    scanf("%f\n", &c1Area);

    printf("PIB ");
    scanf("%f\n", &c1PIB);

    printf("Numero de Pontos Turisticos ");
    scanf("%i\n", &c1NumeroDePontosTuristicos);
    
    //////

    printf("Escolha Os Parametros Da Segunda Carta!\n");

    printf("Estado ");
    scanf("%c\n", &c2Estado);

    printf("Codigo ");
    scanf("%s\n", c2Codigo);

    printf("UF ");
    scanf("%s\n", c2UF);

    printf("Populacao ");
    scanf("%i\n", &c2Populacao);
    
    printf("Area ");
    scanf("%f\n", &c2Area);

    printf("PIB ");
    scanf("%f\n", &c2PIB);

    printf("Numero de Pontos Turisticos ");
    scanf("%i\n", &c2NumeroDePontosTuristicos);

    // Mostrar Todas as Cartas
    printf("Primeira Carta\n");
    printf("Estado: %c\n", c1Estado);
    printf("Codigo: %s\n", c1Codigo);
    printf("Populacao: %i\n", c1Populacao);
    printf("Area %.2f\n", c1Area);
    printf("PIB %.2f\n", c1PIB);
    printf("Numero de Pontos Turisticos %i\n", c1NumeroDePontosTuristicos);

    printf("\n");

    printf("Segunda Carta\n");
    printf("Estado: %c\n", c2Estado);
    printf("Codigo: %s\n", c2Codigo);
    printf("Populacao: %i\n", c2Populacao);
    printf("Area %.2f\n", c2Area);
    printf("PIB %.2f\n", c2PIB);
    printf("Numero de Pontos Turisticos %i\n", c2NumeroDePontosTuristicos);
}