#include <stdio.h>

int main() {
 
    int carta;
    char estado;
    char codigo[5];
    char cidade[10];

    printf("Carta: ");
    scanf("%d", &carta);

    printf("estado: ");
    scanf("%s", &estado);

    printf("Código: ");
    scanf("%s", &codigo);

    printf("cidade: ");
    scanf(" %s", &cidade);

    printf("\ncarta: %d\nEstado: %s\nCódigo: %s\nCidade: %s", carta, estado, codigo, cidade);

    return 0;

}