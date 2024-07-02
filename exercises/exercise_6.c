#include <stdio.h>

int main(){

    int n;
    printf("Digite um número:\n");
    scanf("%d", &n);

    printf("O número antes dos incrementos: %d\n", n);

    n++;
    printf("O número depois do incremento ++: %d\n", n);

    n--;
    printf("O número depois do incremnto --: %d\n", n);

    n+=2;
    printf("O número depois do incremento +=2: %d\n", n);

    n-=6;
    printf("O número depois do incremento -=6: %d\n", n);

    n*=10;
    printf("O número depois do incremento *=10: %d\n", n);

    n/=2;
    printf("O número depois do incremento /=2: %d\n", n);
    
}