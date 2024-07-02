#include <stdio.h>

int main() {

    int s, c, i, a, b;

    a = 5;
    b = 9; 

    s = a + b;
    printf("%d\n", s);

    printf("Escreva um número:\n");
    scanf("%d", &c);

    if (c >= 5) {
        printf("É maior ou igual a 5.\n");
    } else {
        printf("É menor que 5.\n");
    }

/*
    for (inicialização; condição; atualização) {
        // Bloco de código a ser repetido
    }
*/

    for (i = 0; i < 10 ; i++) {
        printf("%d", i); //imprime 0123456789
    }
/*
    while (condição) {
        // Bloco de código a ser repetido
    }
*/
    while (i < s){
        printf("%d", i++);
    }
}