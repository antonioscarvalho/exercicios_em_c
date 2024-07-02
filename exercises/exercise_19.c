#include <stdio.h>

int main() {
    int n1, n2, n3;

    printf("Insira três números para ver qual é o maior e o menor entre eles:\n");

    scanf("%d", &n1);

    printf("Escreva mais um.\n");

    scanf("%d", &n2);

    printf("Escreva mais um.\n");

    scanf("%d", &n3);

    if (n1 > n2 && n2 > n3){
        printf("O primeiro número digitado é o maior e o terceiro número digitado é o menor.");
    }

    if (n2 > n1 && n3 > n2) {
        printf("O terceiro número digitado é o maior e o primeiro número digitado é o menor.");
    }
    if (n2 > n3 && n1 < n3) {
        printf("O segundo número digitado é o maior e o primeiro número digitado é o menor.");
    }
}