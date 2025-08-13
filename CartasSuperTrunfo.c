#include <stdio.h>

int main() {

    char estado[50];
    char codigo[5];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

    printf("--- Carta 1 ---\n");

    printf("Digite o estado (Sigla): ");
    scanf(" %s",estado);

    printf("Digite a cidade (Sigla): ");
    scanf(" %s",cidade);

    printf("Digite o código (A-H) (01-04): ");
    scanf(" %s",codigo);
    
    printf("Digite a população (Apenas números): ");
    scanf(" %d",&populacao);

    printf("Digite a área (Km²) (Use .): ");
    scanf(" %f",&area);

    printf("Digite o PIB (Bi) (Use .): ");
    scanf(" %f",&pib);

    printf("Possui quantos pontos turísticos? ");
    scanf(" %d",&pontosturisticos);

    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("Código: %s\n", codigo);
    printf("População: %d Pessoas\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("PIB: R$ %.2f Bi\n", pib);
    printf("Pontos turísticos: %d\n", pontosturisticos);

    /* --------------- CARTA 1 --------------- */

    printf("\n--- Carta 2 ---\n");

    printf("Digite o estado (Sigla): ");
    scanf(" %s",estado);

    printf("Digite a cidade (Sigla): ");
    scanf(" %s",cidade);

    printf("Digite o código (A-H) (01-04): ");
    scanf(" %s",codigo);
    
    printf("Digite a população (Apenas números): ");
    scanf(" %d",&populacao);

    printf("Digite a área (Km²) (Use .): ");
    scanf(" %f",&area);

    printf("Digite o PIB (Bi) (Use .): ");
    scanf(" %f",&pib);

    printf("Possui quantos pontos turísticos? ");
    scanf(" %d",&pontosturisticos);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("Código: %s\n", codigo);
    printf("População: %d Pessoas\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("PIB: R$ %.2f Bi\n", pib);
    printf("Pontos turísticos: %d\n", pontosturisticos);

    /* --------------- CARTA 2 --------------- */

    return 0;
}