#include <stdio.h>
#include <locale.h>
int main() {
    float a[5];
    float b[5];
    int i;

    printf("Digite cinco n�meros reais:\n");
    for (i = 0; i < 5; i++) {
        printf("Digite o %d� n�mero: ", i + 1);
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

    printf("\nConte�do do vetor 'a':\n");
    for (i = 0; i < 5; i++) {
        printf("%.2f ", a[i]);
    }
    printf("\n");

    printf("\nConte�do do vetor 'b':\n");
    for (i = 0; i < 5; i++) {
        printf("%.2f ", b[i]);
    }
    printf("\n");

    return 0;
}

