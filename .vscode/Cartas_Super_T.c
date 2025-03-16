#include <stdio.h>

int main() {
  // Declaração da estrutura da carta
  struct Carta {
    char estado;
    char codigoCarta[4];
    char nomeCidade[50];
    int populacao;
    float areaKm2;
    float pib;
    int NmPontosTuristicos;
  };

  // Criação de duas variáveis do tipo Carta
  struct Carta carta1, carta2;

  // Informações da primeira carta
  carta1.estado = 'A';
  strcpy(carta1.codigoCarta, "A01");
  strcpy(carta1.nomeCidade, "Rio janeiro");
  carta1.populacao = 1000000;
  carta1.areaKm2 = 100.50;
  carta1.pib = 500000000;
  carta1.NmPontosTuristicos = 5;

  // Informações da segunda carta
  carta2.estado = 'B';
  strcpy(carta2.codigoCarta, "B02");
  strcpy(carta2.nomeCidade, "minas gerais");
  carta2.populacao = 800000;
  carta2.areaKm2 = 80.25;
  carta2.pib = 350000000;
  carta2.NmPontosTuristicos = 3;

  // Exibição dos dados das cartas
  printf("\n--- Cartas Cadastradas ---\n");
  printf("Carta 1:\n");
  printf("Estado: %c\n", carta1.estado);
  printf("Código: %s\n", carta1.codigoCarta);
  printf("Nome da Cidade: %s\n", carta1.nomeCidade);
  printf("População: %d\n", carta1.populacao);
  printf("Área (km²): %.2f\n", carta1.areaKm2);
  printf("PIB: %.2f\n", carta1.pib);
  printf("Pontos Turísticos: %d\n", carta1.NmPontosTuristicos);

  printf("\nCarta 2:\n");
  printf("Estado: %c\n", carta2.estado);
  printf("Código: %s\n", carta2.codigoCarta);
  printf("Nome da Cidade: %s\n", carta2.nomeCidade);
  printf("População: %d\n", carta2.populacao);
  printf("Área (km²): %.2f\n", carta2.areaKm2);
  printf("PIB: %.2f\n", carta2.pib);
  printf("Pontos Turísticos: %d\n", carta2.NmPontosTuristicos);

  return 0;
}
