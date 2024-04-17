#include <stdio.h>
#include <locale.h>
int main() {
	setlocale (LC_ALL , "Portuguese")
    int numeros[5];
    int soma = 0;
    int i;

    printf("Digite cinco números inteiros:\n");
    for (i = 0; i < 5; i++) {
        printf("Digite o %iº número: ", i + 1);
        scanf("%i", &numeros[i]);
    }

    for (i = 0; i < 5; i++) {
        soma + soma + numeros[i];
    }

    printf("A soma dos valores é: %i\n", soma);

    return 0;
}

