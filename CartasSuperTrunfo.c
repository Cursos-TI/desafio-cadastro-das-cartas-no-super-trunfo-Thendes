#include <stdio.h>

int main() {

    char estado[50];
    char codigo[5];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
    float densidadepop;
    float pibpercapta;

    printf("--- Carta 1 ---\n");
    
    /* Escolhi a sigla para suprir o problema do uso do espaço */
    printf("\nDigite o estado (Sigla): ");
    scanf(" %s",estado);
    
    /* Escolhi a sigla para suprir o problema do uso do espaço */
    printf("\nDigite a cidade (Sigla): ");
    scanf(" %s",cidade);

    printf("\nDigite o código (A-H) (01-04): ");
    scanf(" %s",codigo);
    
    printf("\nDigite a população (Apenas números): ");
    scanf(" %d",&populacao);

    printf("\nDigite a área (Apenas números): ");
    scanf(" %f",&area);

    printf("\nDigite o PIB (Apenas números): ");
    scanf(" %f",&pib);

    printf("\nPossui quantos pontos turísticos? ");
    scanf(" %d",&pontosturisticos);

    densidadepop = populacao / area;

    pibpercapta = pib / populacao;

    printf("\n--- Dados da Carta 1 ---\n");
    printf("\nEstado: %s\n", estado);
    printf("\nCidade: %s\n", cidade);
    printf("\nCódigo: %s\n", codigo);
    printf("\nPopulação: %d Habitantes\n", populacao);
    printf("\nÁrea: %.2f Km²\n", area);
    printf("\nPIB: R$ %.2f \n", pib);
    printf("\nPontos turísticos: %d\n", pontosturisticos);
    printf("\nDensidade populacional: %f Hab/Km²\n", densidadepop);
    printf("\nPIB per capta: %f\n", pibpercapta);

    /* --------------- CARTA 1 --------------- */

    printf("\n--- Carta 2 ---\n");
    
    /* Escolhi a sigla para suprir o problema do uso do espaço */
    printf("\nDigite o estado (Sigla): ");
    scanf(" %s",estado);
    
    /* Escolhi a sigla para suprir o problema do uso do espaço */
    printf("\nDigite a cidade (Sigla): ");
    scanf(" %s",cidade);

    printf("\nDigite o código (A-H) (01-04): ");
    scanf(" %s",codigo);
    
    printf("\nDigite a população (Apenas números): ");
    scanf(" %d",&populacao);

    printf("\nDigite a área (Apenas números): ");
    scanf(" %f",&area);

    printf("\nDigite o PIB (Apenas números): ");
    scanf(" %f",&pib);

    printf("\nPossui quantos pontos turísticos? ");
    scanf(" %d",&pontosturisticos);
    
    densidadepop = populacao / area;

    pibpercapta = pib / populacao;

    printf("\n--- Dados da Carta 2 ---\n");
    printf("\nEstado: %s\n", estado);
    printf("\nCidade: %s\n", cidade);
    printf("\nCódigo: %s\n", codigo);
    printf("\nPopulação: %d Habitantes\n", populacao);
    printf("\nÁrea: %.2f Km²\n", area);
    printf("\nPIB: R$ %.2f \n", pib);
    printf("\nPontos turísticos: %d\n", pontosturisticos);
    printf("\nDensidade populacional: %f Hab/Km²\n", densidadepop);
    printf("\nPIB per capta: %f\n", pibpercapta);

    /* --------------- CARTA 2 --------------- */

    return 0;
}