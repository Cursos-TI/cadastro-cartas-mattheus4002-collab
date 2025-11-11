#include <stdio.h>

int main(){

  printf ("Desafio cadastro de cartas!\n");
  printf ("Novo comit\n");
  
  typedef struct {
    char estado;
    char codigo[4];
    char nomeCidade[MAX_NOME];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

void lerCarta(Carta *carta) {
    printf("Estado (A-H): ");
    scanf(" %c", &carta->estado);

    printf("Código da Carta (ex: A01): "Carta (ex: A01): ");
    scanf("%s", carta->codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta->nomeCidade);

    printf("População: ");
    scanf("%d", &carta->populacao);

    printf("Área (km²): ");
    scanf("%f", &carta->area);

    printf("PIB: ");
    scanf("%f", &carta->pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta->pontosTuristicos);
}

void imprimirCarta(Carta carta, int numeroCarta) {
    printf("Carta %d:\n", numeroCarta);
    printf("Estado: %c\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nomeCidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n\n", carta.pontosTuristicos);
}

int main() {
    Carta carta1, carta2;

    printf("Insira os dados da Carta 1:\n");
    lerCarta(&carta1);

    printf("\nInsira os dados da Carta 2:\n");
    lerCarta(&carta2);

    printf("\nDados das Cartas:\n");
    imprimirCarta(carta1, 1);
    imprimirCarta(carta2, 2);

    return 0;
}

