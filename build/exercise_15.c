#include <stdio.h>

int main() {

    int c, n;

    printf("Digite um número para ver a contagem do 0 até ele.\n");
    scanf("%d", &n);

    c = -1;

    while (c < n) {
        c++;
        printf("%d ", c);
    }

}