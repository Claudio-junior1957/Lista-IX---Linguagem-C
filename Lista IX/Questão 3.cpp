#include <stdio.h>
#include <locale.h>
int main() {
	setlocale (LC_ALL , "Portuguese")
    int numeros[5];
    int soma = 0;
    int i;

    printf("Digite cinco n�meros inteiros:\n");
    for (i = 0; i < 5; i++) {
        printf("Digite o %i� n�mero: ", i + 1);
        scanf("%i", &numeros[i]);
    }

    for (i = 0; i < 5; i++) {
        soma + soma + numeros[i];
    }

    printf("A soma dos valores �: %i\n", soma);

    return 0;
}

