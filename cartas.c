#include <stdio.h>

int main() {
 
    int carta = 1;
    char estado = 'A';
    char codigo[5] = "A01";
    char cidade[10] = "Alagoas";
    int populacao;
    float area;
    float PIB;
    int turismo;
  
    printf("Carta: %d\nEstado: %c\nCódigo da Carta: %s\nCidade: %s\n", carta, estado, codigo, cidade);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &PIB);

    printf("Número de pontos turísticos: ");
    scanf("%d", &turismo);

    printf("\nPopulação: %d\nÁrea: %f km²\nPIB: %f bilhões de reais\nNúmero de Pontos Turísticos: %d\n", populacao, area, PIB, turismo);

    int carta2 = 2;
    char estado2 = 'B';
    char codigo2[5] = "A02";
    char cidade2[10] = "Bahia";
    int populacao2;
    float area2;
    float PIB2;
    int turismo2;

    printf("\nCarta: %d\nEstado: %c\nCódigo da Carta: %s\nCidade: %s\n", carta2, estado2, codigo2, cidade2);
    
    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%.2f", &area2);

    printf("PIB: ");
    scanf("%.2f", &PIB2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &turismo2);

    printf("\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d", populacao2, area2, PIB2, turismo2);
    
    return 0;

}