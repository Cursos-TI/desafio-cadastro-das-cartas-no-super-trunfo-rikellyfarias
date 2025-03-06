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

    printf("\nPopulação: %d\nÁrea: %f km²\nPIB: %f bilhões de reais\nNúmero de Pontos Turísticos: %d", populacao, area, PIB, turismo);

    return 0;

}