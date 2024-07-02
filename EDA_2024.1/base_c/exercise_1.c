#include <stdio.h>

int main(){
    int idade;

    printf("Digite sua idade:\n");

    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Você já pode ser preso.\n");
    } else if (idade >= 16 && idade < 18) {
        printf("Já pode votar.\n");
    } else {
        printf("Menor de idade não pode votar.\n");
    }
}