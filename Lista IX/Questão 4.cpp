#include <stdio.h>
#include<locale.h>
int main() {
setlocale(LC_ALL, "Portuguese")

    int  i, v[10], maior;

    printf("Digite dez números inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Digite o %iº número: ", i + 1);
        scanf("%i", &v[i]);
    }

    maior = v[0];

    for (i = 1; i < 10; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
    }

    printf("O maior valor encontrado no vetor é: %i\n", maior);

    return 0;
}

