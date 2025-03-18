#include <stdio.h>

int main(void) {
  float soma = 0;
  float nota = 0;
  int repeticao = 0;

  printf("Digite uma nota (-5 para encerrar): ");
  scanf("%f", &nota);

  while(nota > -4) {
    soma += nota;
    repeticao += 1;
    printf("Digite uma nota (-5 para encerrar): ");
    scanf("%f", &nota);
  }

  printf("Resultado da soma: %.2f", soma/repeticao);

  return 0;
}