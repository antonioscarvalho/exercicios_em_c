#include <stdio.h>

int main(){

    float result;
    int i;

    printf("Digite o número que você quer saber a porcentagem dele.\n");
    scanf("%d", &i);

    result = i / 100;
    
    printf("A porcentagem é %f por cento.\n", result);

}
