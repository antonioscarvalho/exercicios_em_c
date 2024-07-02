#include <stdio.h>

int fatorial(int n) {
    int resultado;
    if (n == 0) {
        resultado = 1;
    } else {
        resultado = n * fatorial(n - 1);
    } return resultado;
}

int main() {
    int n, resultado;
    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &n);
    resultado = fatorial(n);
    printf("O fatorial de %d é %d\n", n, resultado);
}