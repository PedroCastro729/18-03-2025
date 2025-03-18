#include <stdio.h>

int main(void) {
    float nota;
    float total = 0.0;
    int contador = 1;
    int fim = 3;
    
    while(contador <= fim) {
        printf("Digite a nota %d: ", contador);
        scanf("%f", &nota);
        
        total = total + nota;
        
        contador = contador + 1;
    }
    
    total = total / fim;
    
    printf("Media: %.2f", total);

    return 0;
}