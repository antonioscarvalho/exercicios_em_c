#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, c, random;

    c = 0;

    //Para achar sortear um número entre 1 e 10.
    random = (rand() % 10);

    while(n != random){
        printf("Advinhe o número sorteado pelo computador, no intervalo de 0 a 10.\n");
        scanf("%d", &n);
        c++;
        if(n == random){
            printf("Parabéns, você acertou!\n");
        }
        else{
            printf("Não acertou, chute outro número.\n");
        }
    }
    printf("Você chutou %d vez(es).\n", c);

}