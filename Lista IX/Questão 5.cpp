#include <stdio.h>
#include <locale.h>
int main() {
    float a[5];
    float b[5];
    int i;

    printf("Digite cinco números reais:\n");
    for (i = 0; i < 5; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%f", &a[i]);
    }

    for (i = 0; i < 5; i++) {
        if (i == 0) {
            b[i] = a[i];
        } else if (i % 2 == 0) {
            b[i] = a[i] * 5;
        } else {
            b[i] = a[i] + 5;
        }
    }

    printf("\nConteúdo do vetor 'a':\n");
    for (i = 0; i < 5; i++) {
        printf("%.2f ", a[i]);
    }
    printf("\n");

    printf("\nConteúdo do vetor 'b':\n");
    for (i = 0; i < 5; i++) {
        printf("%.2f ", b[i]);
    }
    printf("\n");

    return 0;
}

