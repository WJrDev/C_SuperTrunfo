#include<stdio.h>

int Main()
{
    #pragma region Parametros da Primeira Carta

    char c1_estado;
    char c1_codigo[3];
    char c1_UF[2];
    int c1_populacao;
    float c1_area;
    float c1_PIB;
    int c1_numeroDePontosTuristicos;

    printf("Escolha Os Parametros Da Primeira Carta!\n");

    printf("Estado ");
    scanf("%c\n", &c1_estado);

    printf("Codigo ");
    scanf("%s\n", c1_codigo);

    printf("UF ");
    scanf("%s\n", c1_UF);

    printf("Populacao ");
    scanf("%i\n", &c1_populacao);
    
    printf("Area ");
    scanf("%f\n", &c1_area);

    printf("PIB ");
    scanf("%f\n", &c1_PIB);

    printf("Numero de Pontos Turisticos ");
    scanf("%i\n", &c1_numeroDePontosTuristicos);
    #pragma endregion

    #pragma region Parametros da Segunda Carta

    char c2_estado;
    char c2_codigo[3];
    char c2_UF[2];
    int c2_populacao;
    float c2_area;
    float c2_PIB;
    int c2_numeroDePontosTuristicos;

    printf("Escolha Os Parametros Da Primeira Carta!\n");

    printf("Estado ");
    scanf("%c\n", &c2_estado);

    printf("Codigo ");
    scanf("%s\n", c2_codigo);

    printf("UF ");
    scanf("%s\n", c2_UF);

    printf("Populacao ");
    scanf("%i\n", &c2_populacao);
    
    printf("Area ");
    scanf("%f\n", &c2_area);

    printf("PIB ");
    scanf("%f\n", &c2_PIB);

    printf("Numero de Pontos Turisticos ");
    scanf("%i\n", &c2_numeroDePontosTuristicos);
    #pragma endregion

    #pragma region Mostrar Todas as Cartas
    printf("Primaira Carta\n");
    printf("Estado: %c\n", c1_estado);
    printf("Codigo: %s\n", c1_codigo);
    printf("Populacao: %i\n", c1_populacao);
    printf("Area %.2f\n", c1_area);
    printf("PIB %.2f\n", c1_PIB);
    printf("Numero de Pontos Turisticos %i\n", c1_numeroDePontosTuristicos);

    printf("\n");

    printf("Segunda Carta\n");
    printf("Estado: %c\n", c2_estado);
    printf("Codigo: %s\n", c2_codigo);
    printf("Populacao: %i\n", c2_populacao);
    printf("Area %.2f\n", c2_area);
    printf("PIB %.2f\n", c2_PIB);
    printf("Numero de Pontos Turisticos %i\n", c2_numeroDePontosTuristicos);
    #pragma region 

}