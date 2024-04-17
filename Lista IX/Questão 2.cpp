#include <stdio.h>
#include<locale.h>
int main() {
    char nome[40];

    int i = 0, contador = 1;

    printf("Digite seu nome completo: ");
    gets(nome);

    for (i=0; nome[0] != '\0'; i++){
     contador++;
	}
    
    printf("A  quantidade de caracteres inseridos foi: %i \n", contador);

    return 0;
}

