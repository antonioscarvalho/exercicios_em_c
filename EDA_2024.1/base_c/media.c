#include <stdio.h>

int main(void) {
    float vet[5] = {0};
    float total = 0;
    float media = 0;

    printf("Digite 5 valores:\n");

    for (int i = 0; i < 5; i++) { // i = 0, 1, 2, 3, 4
        scanf("%f", &vet[i]); // &vet[i] é o endereço de memória do elemento i do vetor vet
        total += vet[i]; // total = total + vet[i]
    }
    media = total / 5; 

    printf("Media: %.2f\n", media);
    
    return (0);
    
}