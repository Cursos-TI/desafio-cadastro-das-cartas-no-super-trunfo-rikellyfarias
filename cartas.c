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
    //printf irá imprimir as váriaveis 

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &PIB);

    printf("Número de pontos turísticos: ");
    scanf(" %c", &turismo);

    printf("\nCarta: %d\nEstado: %c\nCódigo da Carta: %s\nCidade: %s\n", carta, estado, codigo, cidade);
    printf("População: %d\nÁrea: %f km²\nPIB: %f bilhões de reais\nNúmero de Pontos Turísticos: %c\n", populacao, area, PIB, turismo);
    //printf irá imprimir as variaveis e as informações que o usúario adicionou no scanf na carta 1

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
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &PIB2);

    printf("Número de pontos turísticos: ");
    scanf(" %c", &turismo2);

    printf("\nCarta %d\nEstado: %c\nCódigo da Carta: %s\nCidade: %s", carta2, estado2, codigo2, cidade);
    printf("População: %d\nÁrea: %f km²\nPIB: %f bilhões de reais\nNúmero de Pontos Turísticos: %c", populacao2, area2, PIB2, turismo2);
    //printf irá imprimir as informações que o usúario adicionou no scanf na carta 2

    return 0;

}