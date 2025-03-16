#include <stdio.h>

void entradaDeDados(){


    printf("SUPER TRUNFO \n\n");
    char codigoCidade[3];
    char nomeCidade[30];
    unsigned long int populacao;
    int pontosTuristicos;
    float area, pib;
    
    

    printf("CIDADE 01\n");
    printf("Digite o código da cidade:\n");
    scanf("%s", codigoCidade);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nomeCidade);

    printf("Qual a população da cidade:\n");
    scanf("%lu", &populacao);
    unsigned long int polulacaoCidade1 = populacao;
    
    printf("Área da cidade:\n");
    scanf("%f", &area);
    float areaCidade1 = area;

    printf("Qual o PIB da cidade:\n");
    scanf("%f", &pib);
    float pibCidade1 = pib;

    printf("Quantidade de pontos turisticos:\n");
    scanf("%d", &pontosTuristicos);
    int pontosTuristicosCidade1 = pontosTuristicos;

    printf("\nAqui está as informações da cidade %s\n", nomeCidade);
    printf("Código da cidade: %s\n", codigoCidade);
    printf("População: %lu\n", populacao);
    printf("Área da cidade: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Quantidade pontos turisticos: %d\n", pontosTuristicos);

    float densiPopulacaoCidade1 = (float) populacao / area;
    float pibPerCapitaCidade1 = (float) pib / populacao;
    printf("Densidade Populacional: %.2f hab/km² \n", densiPopulacaoCidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapitaCidade1);

    float SuperPoderCidade1 = (float) populacao + area + pib + (float) pontosTuristicos + pibPerCapitaCidade1 + densiPopulacaoCidade1;
    printf("super poder: %.2f\n", SuperPoderCidade1);

    printf("\n====================================\n");
    
    printf("CIDADE 02\n");
    printf("Digite o código da cidade:\n");
    scanf("%s", codigoCidade);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nomeCidade);

    printf("Qual a população da cidade:\n");
    scanf("%d", &populacao);
    unsigned long int polulacaoCidade2 = populacao;

    printf("Área da cidade:\n");
    scanf("%f", &area);
    float areaCidade2 = area;

    printf("Qual o PIB da cidade:\n");
    scanf("%f", &pib);
    float pibCidade2 = pib;

    printf("Quantidade de pontos turisticos:\n");
    scanf("%d", &pontosTuristicos);
    int pontosTuristicosCidade2 = pontosTuristicos;

    printf("\nAqui está as informações da cidade %s\n", nomeCidade);
    printf("Código da cidade: %s\n", codigoCidade);
    printf("População: %d\n", populacao);
    printf("Área da cidade: %.2f KM²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Quantidade pontos turisticos: %d\n", pontosTuristicos);

    float densiPopulacaoCidade2 = (float) populacao / area;
    float pibPerCapitaCidade2 = (float) pib / populacao;
    printf("Densidade Populacional: %.2f hab/km² \n", densiPopulacaoCidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapitaCidade2);

    float superPoderCidade2 = populacao + area + pib + pontosTuristicos + pibPerCapitaCidade2 + densiPopulacaoCidade2;
    printf("super poder: %f\n", superPoderCidade2);

    printf("\n====================================\n");

    printf("Comparação das cartas:");

    printf("População: Carta %d venceu (%d)\n", polulacaoCidade1 > polulacaoCidade2 ? 1 : 2, polulacaoCidade1 > polulacaoCidade2);
    printf("Área: Carta %d venceu (%d)\n", areaCidade1 > areaCidade2 ? 1 : 2, areaCidade1 > areaCidade2);
    printf("PIB: Carta %d venceu (%d)\n", pibCidade1 > pibCidade2 ? 1 : 2, pibCidade1 > pibCidade2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", pontosTuristicosCidade1 > pontosTuristicosCidade2 ? 1 : 2, pontosTuristicosCidade1 > pontosTuristicosCidade2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densiPopulacaoCidade1 > densiPopulacaoCidade2 ? 1 : 2, densiPopulacaoCidade1 > densiPopulacaoCidade2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", pibPerCapitaCidade1 > pibPerCapitaCidade2 ? 1 : 2, pibPerCapitaCidade1 > pibPerCapitaCidade2);
    printf("Super Poder: Carta %d venceu (%d)\n", SuperPoderCidade1 > superPoderCidade2 ? 1 : 2, SuperPoderCidade1 > superPoderCidade2);


}


int main(){
entradaDeDados();

return 0;
}