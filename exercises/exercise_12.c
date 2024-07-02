#include <stdio.h>

int main() {
    int n1, n2;

    printf("Digite um número inteiro:\n");
    scanf("%d", &n1);
    printf("Digite outro número inteiro:\n");
    scanf("%d", &n2);

    if (n1 > n2) {
        printf("O primeiro número é maior que o segundo.");
    }
    else if (n2 > n1) {
        printf("O segundo número é maior que o primeiro.");
    }
    else {
        printf("Os dois números são iguais.");
    }
}