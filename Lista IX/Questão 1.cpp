#include <stdio.h>

int main() {
    int vet[8], i;

    printf("Digite oito valores inteiros:\n");
    for (i = 0; i < 8; i++) {
        printf("Digite o %iº valor: ", i + 1);
        scanf("%i", &vet[i]);
    }

    printf("\nValores armazenados na ordem inversa:\n");
    for (i = 7; i >= 0; i--) {
        printf("%i ", vet[i]);
    }
  
    return 0;
}

