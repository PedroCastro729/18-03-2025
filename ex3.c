#include <stdio.h>

int main(void) {
  int numero1;
  int numero2;
  int numero3;
  
  int a;
  int b;
  int c;

  printf("Digite o primeiro lado (-1 sair): ");
  scanf("%d", &numero1);
  
  while(numero1 != -1){
  
  printf("Digite o segundo lado: ");
  scanf("%d", &numero2);
  
  printf("Digite o terceiro lado: ");
  scanf("%d", &numero3);
  
  if(numero1 >= numero2) {
      if(numero1 >= numero3) {
          c = numero1;
          a = numero2;
          b = numero3;
      } else {
          c = numero3;
          a = numero2;
          b = numero1;
      } if(numero2 >= numero1) {
          c = numero2;
          a = numero3;
          b = numero1;
      }
  }
  
  if(c * c == a * a + b * b) {
      printf("Triangulo retangulo!");
  } else {
      printf("Os valores não gera um triangulo retangulo");
  }
  
  printf("Digite o primeiro lado (-1 sair): \n");
  scanf("%d", &numero1);
}

  return 0;
}