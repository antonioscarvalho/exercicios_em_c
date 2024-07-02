#include <stdio.h>

int main () {

    int num, ant, suc;

    printf("Digite um número:\n");
    scanf("%d", &num);

    ant = num - 1;
    suc = num + 1;

    printf("\nO antecessor do número %d:\n", num);
    printf("---> %d\n", ant);
    printf("\nO sucessor do número %d:\n", num);
    printf("---> %d\n", suc);

}