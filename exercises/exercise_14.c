#include <stdio.h>

int main() {
    int idade, ano;

    printf("Digite o ano de nascimento que o atleta nasceu:\n");
    scanf("%d", &ano);

    idade = 2023 - ano;

    if (idade <= 9) {
        printf("A pessoa se enquadra na categoria mirim.\n");
    }
    else if (9 < idade && idade <= 14) {
        printf("A pessoa se enquadra na categoria infantil.\n");
    }
    else if (14 < idade && idade <= 19) {
        printf("A pessoa se enquadra na categoria junior.\n");
    }
    else if (19 < idade && idade <= 20) {
        printf("A pessoa se enquadra na categoria sênior.\n");
    }
    else {
        printf("Não pode concorrer.\n");
    }
}
