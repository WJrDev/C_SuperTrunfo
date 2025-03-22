#include<stdio.h>

int main()
{
    char estadoCartaUm, estadoCartaDois;

    char codigoCartaUm[5], codigoCartaDois[5];

    char cidadeCartaUm[20], cidadeCartaDois[20];
    int populacaoCartaUm, populacaoCartaDois;
    float areaCartaUm, areaCartaDois;
    float PIBCartaUm, PIBCartaDois;
    int numeroDePontosTuristicosCartaUm, numeroDePontosTuristicosCartaDois;
    float densidadePopulacionalCartaUm, densidadePopulacionalCartaDois;
    float PIBPerCapitaCartaUm, PIBPerCapitaCartaDois;
    float superPoderCartaUm, superPoderCartaDois; 


    printf("Escolha Os Parametros Da Primeira Carta!\n");

    printf("Estado:\n");
    scanf("%c", &estadoCartaUm);

    printf("Codigo:\n");
    scanf("%s", codigoCartaUm);

    printf("Cidade:\n");
    scanf("%s", cidadeCartaUm);

    printf("Populacao:\n");
    scanf("%i", &populacaoCartaUm);
    
    printf("Area:\n");
    scanf("%f", &areaCartaUm);

    printf("PIB:\n");
    scanf("%f", &PIBCartaUm);

    printf("Numero de Pontos Turisticos:\n");
    scanf("%i", &numeroDePontosTuristicosCartaUm);   

    printf("\nEscolha Os Parametros Da Segunda Carta!\n");

    printf("Estado:\n");
    scanf("%c", &estadoCartaDois);

    printf("Codigo:\n");
    scanf("%s", codigoCartaDois);

    printf("Cidade:\n");
    scanf("%s", cidadeCartaDois);

    printf("Populacao:\n");
    scanf("%i", &populacaoCartaDois);
    
    printf("Area:\n");
    scanf("%f", &areaCartaDois);

    printf("PIB:\n");
    scanf("%f", &PIBCartaDois);

    printf("Numero de Pontos Turisticos:\n");
    scanf("%i", &numeroDePontosTuristicosCartaDois);

    // Mostrar Todas as Cartas
    printf("\nPrimeira Carta\n ");
    printf("Estado: %c\n", estadoCartaUm);
    printf("Codigo: %s\n", codigoCartaUm);
    printf("Cidade: %s\n", cidadeCartaUm);
    printf("Populacao: %i\n", populacaoCartaUm);
    printf("Area: %.2f km²\n", areaCartaUm);
    printf("PIB: R$ %.2f\n", PIBCartaUm);
    printf("Numero de Pontos Turisticos %i\n", numeroDePontosTuristicosCartaUm);

    densidadePopulacionalCartaUm = (float)(populacaoCartaUm /areaCartaUm);
    printf("Densidade Populacional: %f hab/km²\n", densidadePopulacionalCartaUm);

    PIBPerCapitaCartaUm = (float)(populacaoCartaUm / areaCartaUm);
    printf("PIB Per Capita: R$ %f\n", PIBPerCapitaCartaUm);

    superPoderCartaUm = (float)(populacaoCartaUm + areaCartaUm + PIBCartaUm + numeroDePontosTuristicosCartaUm + PIBPerCapitaCartaUm * 1/densidadePopulacionalCartaUm);
    printf("Super Poder: %.2f\n", superPoderCartaUm);

    printf("\nSegunda Carta\n");
    printf("Estado: %c\n", estadoCartaDois);
    printf("Codigo: %s\n", codigoCartaDois);
    printf("Cidade: %s\n", cidadeCartaDois);
    printf("Populacao: %i\n", populacaoCartaDois);
    printf("Area: %.2f km²\n", areaCartaDois);
    printf("PIB: R$ %.2f\n", PIBCartaDois);
    printf("Numero de Pontos Turisticos: %i\n", numeroDePontosTuristicosCartaDois);

    densidadePopulacionalCartaDois = (float)(populacaoCartaDois /areaCartaDois);
    printf("Densidade Populacional: %f hab/km²\n", densidadePopulacionalCartaDois);

    PIBPerCapitaCartaDois = (float)(populacaoCartaDois / PIBCartaDois);
    printf("PIB Per Capita: R$ %f\n", PIBPerCapitaCartaDois);

    superPoderCartaDois = (float)(populacaoCartaDois + areaCartaDois + PIBCartaDois + numeroDePontosTuristicosCartaDois + PIBPerCapitaCartaDois * 1/densidadePopulacionalCartaDois);
    printf("Super Poder: %.2f\n", superPoderCartaDois);

    //Jogo
    printf("Escolha um atributo para comparar!\n");
    printf("- População: Escreva 1!\n");
    printf("- Area: Escreva 2!\n");
    printf("- PIB: Escreva 3!\n");
    printf("- Numero de Pontos Turisticos: Escreva 4!\n");
    printf("- Densidade Populacional: Escreva 5!\n");
    printf("- PIB Per Capita: Escreva 6!\n");
    printf("- Super Poder: Escreva 7!\n");
    short int resultado;
    scanf("%i", &resultado);
    
    switch (resultado)
    {
        case 1:
        if(populacaoCartaUm > populacaoCartaDois)
        printf("Carta Um tem a população maior!\nVitória para Carta Um");
        else if(populacaoCartaUm < populacaoCartaDois)
        printf("Carta Dois tem a população maior!\nVitória para Carta Dois");
        else
        printf("Empate!");
        break;

        case 2:
        if(areaCartaUm > areaCartaDois)
        printf("Carta Um tem a area maior!\nVitória para Carta Um");
        else if(areaCartaUm < areaCartaDois)
        printf("Carta Dois tem a area maior!\nVitória para Carta Dois");
        else
        printf("Empate!");
        break;

        case 3:
        if(PIBCartaUm > PIBCartaDois)
        printf("Carta Um tem o PIB maior!\nVitória para Carta Um");
        else if(PIBCartaUm < PIBCartaDois)
        printf("Carta Dois tem o PIB maior!\nVitória para Carta Dois");
        else
        printf("Empate!");
        break;

        case 4:
        if(numeroDePontosTuristicosCartaUm > numeroDePontosTuristicosCartaDois)
        printf("Carta Um tem o numero de pontos turisticos maior!\nVitória para Carta Um");
        else if(numeroDePontosTuristicosCartaUm < numeroDePontosTuristicosCartaDois)
        printf("Carta Dois tem o numero de pontos turisticos maior!\nVitória para Carta Dois");
        else
        printf("Empate!");
        break;

        case 5:
        if(densidadePopulacionalCartaUm < densidadePopulacionalCartaDois)
        printf("Carta Um tem a densidade populacional menor!\nVitória para Carta Um");
        else if(densidadePopulacionalCartaUm > densidadePopulacionalCartaDois)
        printf("Carta Dois tem a densidade populacional menor!\nVitória para Carta Dois");
        else
        printf("Empate!");
        break;

        case 6:
        if(PIBPerCapitaCartaUm > PIBPerCapitaCartaDois)
        printf("Carta Um tem o PIB Per Capita maior!\nVitória para Carta Um");
        else if(PIBPerCapitaCartaUm < PIBPerCapitaCartaDois)
        printf("Carta Dois tem o PIB Per Capita maior!\nVitória para Carta Dois");
        else
        printf("Empate!");
        break;

        case 7:
        if(superPoderCartaUm > superPoderCartaDois)
        printf("Carta Um tem o Super Poder maior!\nVitória para Carta Um");
        else if(superPoderCartaUm < superPoderCartaDois)
        printf("Carta Dois tem o Super Poder maior!\nVitória para Carta Dois");
        else
        printf("Empate!");
        break;

        default:
        printf("Valor inserido não consta, tente novamente.");
        break;
    }
}