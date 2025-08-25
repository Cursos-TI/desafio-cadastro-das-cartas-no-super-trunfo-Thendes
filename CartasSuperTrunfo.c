#include <stdio.h>

int main() {

    char estado1[10];
    char codigo1[5];
    char cidade1[10];
    unsigned long int populacao1;
    float area1;
    unsigned long long int pib1;
    int pontosturisticos1;
    float densidadepop1;
    float pibpercapta1;
    unsigned long long int superpoder1;

    printf("--- Carta 1 ---\n");
    
    /* Escolhi a sigla para suprir o problema do uso do espaço */
    printf("\nDigite o estado (Sigla): ");
    scanf(" %s",estado1);
    
    /* Escolhi a sigla para suprir o problema do uso do espaço */
    printf("\nDigite a cidade (Sigla): ");
    scanf(" %s",cidade1);

    printf("\nDigite o código (A-H) (01-04): ");
    scanf(" %s",codigo1);
    
    printf("\nDigite a população (Apenas números): ");
    scanf(" %lu",&populacao1);

    printf("\nDigite a área (Apenas números): ");
    scanf(" %f",&area1);

    printf("\nDigite o PIB (Apenas números): ");
    scanf(" %llu",&pib1);

    printf("\nPossui quantos pontos turísticos? ");
    scanf(" %d",&pontosturisticos1);

    densidadepop1 = (double) populacao1 / area1;

    pibpercapta1 = (double) pib1 / populacao1;

    superpoder1 = (double) populacao1 + area1 + (double) pib1 + pontosturisticos1 + (1 / densidadepop1) + pibpercapta1;

    printf("\n--- Dados da Carta 1 ---\n");
    printf("\nEstado: %s\n", estado1);
    printf("\nCidade: %s\n", cidade1);
    printf("\nCódigo: %s\n", codigo1);
    printf("\nPopulação: %lu Habitantes\n", populacao1);
    printf("\nÁrea: %.2f Km²\n", area1);
    printf("\nPIB: R$ %llu \n", pib1);
    printf("\nPontos turísticos: %d\n", pontosturisticos1);
    printf("\nDensidade populacional: %f Hab/Km²\n", densidadepop1);
    printf("\nPIB per capta: R$ %.1f\n", pibpercapta1);
    printf("\nSuper Poder: %llu\n", superpoder1);

    /* --------------- CARTA 1 --------------- */

    char estado2[10];
    char codigo2[5];
    char cidade2[10];
    unsigned long int populacao2;
    float area2;
    unsigned long long int pib2;
    int pontosturisticos2;
    float densidadepop2;
    float pibpercapta2;
    unsigned long long int superpoder2;

    printf("\n--- Carta 2 ---\n");
    
    /* Escolhi a sigla para suprir o problema do uso do espaço */
    printf("\nDigite o estado (Sigla): ");
    scanf(" %s",estado2);
    
    /* Escolhi a sigla para suprir o problema do uso do espaço */
    printf("\nDigite a cidade (Sigla): ");
    scanf(" %s",cidade2);

    printf("\nDigite o código (A-H) (01-04): ");
    scanf(" %s",codigo2);
    
    printf("\nDigite a população (Apenas números): ");
    scanf(" %lu",&populacao2);

    printf("\nDigite a área (Apenas números): ");
    scanf(" %f",&area2);

    printf("\nDigite o PIB (Apenas números): ");
    scanf(" %llu",&pib2);

    printf("\nPossui quantos pontos turísticos? ");
    scanf(" %d",&pontosturisticos2);
    
    densidadepop2 = (double) populacao2 / area2;

    pibpercapta2 = (double) pib2 / populacao2;

    superpoder2 = (double) populacao2 + area2 + (double) pib2 + pontosturisticos2 + (1 / densidadepop2) + pibpercapta2;

    printf("\n--- Dados da Carta 2 ---\n");
    printf("\nEstado: %s\n", estado2);
    printf("\nCidade: %s\n", cidade2);
    printf("\nCódigo: %s\n", codigo2);
    printf("\nPopulação: %lu Habitantes\n", populacao2);
    printf("\nÁrea: %.2f Km²\n", area2);
    printf("\nPIB: R$ %llu \n", pib2);
    printf("\nPontos turísticos: %d\n", pontosturisticos2);
    printf("\nDensidade populacional: %f Hab/Km²\n", densidadepop2);
    printf("\nPIB per capta: R$ %.1f\n", pibpercapta2);
    printf("\nSuper Poder: %llu\n", superpoder2);

    /* --------------- CARTA 2 --------------- */

    int vencedorpopulacao;
    int vencedorarea;
    int vencedorpib;
    int vencedorpontosturisticos;
    int vencedordensidadepop;
    int vencedorpibpercapta;
    int vencedorsuperpoder;

    printf("\n--- Resultado final dos embates individuais ---\n");

    vencedorpopulacao = (populacao1 > populacao2);

    if (vencedorpopulacao == 1)
       printf("\nCarta 1 Venceu em população\n");
    else 
       printf("\nCarta 2 Venceu em população\n");

    vencedorarea = (area1 > area2);

    if (vencedorarea == 1)
       printf("\nCarta 1 Venceu em área\n");
    else 
       printf("\nCarta 2 Venceu em área\n");

    vencedorpib = (pib1 > pib2);

    if (vencedorpib == 1)
       printf("\nCarta 1 Venceu em PIB\n");
    else 
       printf("\nCarta 2 Venceu em PIB\n");

    vencedorpontosturisticos = (pontosturisticos1 > pontosturisticos2);

    if (vencedorpontosturisticos == 1)
       printf("\nCarta 1 Venceu em pontos turísticos\n");
    else 
       printf("\nCarta 2 Venceu em pontos turísticos\n");

    vencedordensidadepop = (densidadepop1 < densidadepop2);

    if (vencedordensidadepop == 1)
       printf("\nCarta 1 Venceu em densidade populacional\n");
    else 
       printf("\nCarta 2 Venceu em densidade populacional\n");

    vencedorpibpercapta = (pibpercapta1 > pibpercapta2);

    if (vencedorpibpercapta == 1)
       printf("\nCarta 1 Venceu em PIB per capta\n");
    else 
       printf("\nCarta 2 Venceu em PIB per capta\n");

    vencedorsuperpoder = (superpoder1 > superpoder2);

    if (vencedorsuperpoder == 1)
       printf("\nCarta 1 Venceu em Super Poder\n");
    else 
       printf("\nCarta 2 Venceu em Super Poder\n");

    /* --------------- RESULTADOS --------------- */

    return 0;
}