#include <stdio.h>

int main(){
    float n1, n2, n3, media;
    printf("---MÉDIA DO ALUNO---\n\n");
    printf("Digite a primeira nota:\n");
    scanf("%f", &n1);
    printf("Digite a segunda nota:\n");
    scanf("%f", &n2);
    printf("Digite a terceira nota:\n");
    scanf("%f", &n3);
    media = (n1 + n2 + n3)/3;
    printf("Média do aluno: %.1f\n", media);
    if (media < 5){
        printf("O aluno ficou abaixo da média, portanto foi reprovado.\n\n");
    }
    else if (media >= 5){
        printf("O aluno obteu o rendimento de nota necessário, portanto foi aprovado.\n\n");
    }
}