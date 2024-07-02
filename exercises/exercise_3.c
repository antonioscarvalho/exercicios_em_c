#include <stdio.h>

int main(){

    int ano = 0;
    int idade;

    printf("Digite seu ano de nascimento:\n");
    scanf("%d", &ano);

    idade = (2023 - ano);

    printf("Você tem %d anos.\n", idade);

}