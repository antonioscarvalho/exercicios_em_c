#include <stdio.h>

int main() {
    int num, num1, num2;

    printf("Escreva um número para verificar se ele é primo ou não:\n\n");

    scanf("%d", &num);

    num1 = num % 2;

    num2 = num % 3;

    if (num == 2 || num == 3 ) {
        printf("\nÉ primo.\n\n");
    } else if (num1 == 0 || num2 == 0) {
        printf ("\nNão é primo\n\n");
    } else {
        printf("\nÉ primo.\n\n");
    }
}