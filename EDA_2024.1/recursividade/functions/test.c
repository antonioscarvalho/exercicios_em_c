#include <stdio.h>

float test(float a, float b) {
    return a + b; //test é uma função que retorna a soma de dois números
}

int main() {
    float a;
    float b;
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    float c = test(a, b);
    printf("c = %.1f\n\n", c);
    return 0;
}