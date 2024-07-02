#include <stdio.h>

#define txt "Entrada e saída de dados com Operações Aritmédicas."

int main(){

    printf("%s\n\n", txt);
    
    int a, b, soma, sub, mult, div;

    printf("Digite um número:\n");
    scanf("%d", &a);

    printf("Digite outro número:\n");
    scanf("%d", &b);

    soma = a + b;
    printf("A soma dos dois resultou em: %d\n", soma);

    sub = a - b;
    printf("A subtração dos dois resultou em: %d\n", sub);

    mult = a * b;
    printf("A multiplicação dos dois resultou em: %d\n", mult);

    div = a / b;
    printf("A divisão dos dois resultou em: %d\n", div);
}