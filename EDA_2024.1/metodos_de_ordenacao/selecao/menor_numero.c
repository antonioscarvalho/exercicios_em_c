//menor elemento

#include <stdio.h>

int smallerIndex(int vet[], int tam, int ini){
    int min = ini, j;
    for(j=ini+1; j<tam; j++){
        if(vet[min] > vet[j])
            min = j;
        }
    return min;
}

int main(){
    int vet[] = {5, 3, 2, 4, 7, 1, 0, 6};
    int tam = 8;
    int i, min;
    for(i=0; i<tam; i++){
        min = smallerIndex(vet, tam, i);
        printf("Menor elemento: %d; ", vet[min]);
        if(i != min){
            int aux = vet[i];
            vet[i] = vet[min];
            vet[min] = aux;
        }
        printf("Iteracao %d: ", i+1);
        for(int j=0; j<tam; j++){
            printf("%d ", vet[j]);
        }
        printf("\n");
    }
    printf("Vetor ordenado: ");
    for(i=0; i<tam; i++){
        printf("%d ", vet[i]);
    }
    return 0;
}