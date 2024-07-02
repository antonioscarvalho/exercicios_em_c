#include <stdio.h>

int main(){
    
    char nome[50] = "";
    int idade;
    float peso;

    printf("Qual seu nome?\n");
    scanf("%s", nome);

    printf("Qual sua idade?\n");
    scanf("%d", &idade);

    printf("Qual seu peso?\n");
    scanf("%f", &peso);

    printf("Seu nome: %s\n", nome);
    printf("Sua idade: %d\n", idade);
    printf("Seu peso é: %.1f\n", peso);

}