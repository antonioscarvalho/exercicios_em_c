#include <stdio.h>
#include <stdlib.h>

int Q4(char *vet, int tam){
    int i, j, pcont = 0;
    char aux;
    for (i = 0; i < tam; i++){ // Bubble sort
        for (j = i+1; j < tam; j++){ 
            if (vet[i] > vet[j]){ // Troca de elementos
                printf("Vetor antes da troca: %s\n", vet); // Impressão do vetor antes da troca
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
                pcont++; // Contador de trocas
                printf("Vetor depois da troca: %s\n\n", vet); // Impressão do vetor a cada troca
            }
        }
    }
    return pcont;
}

int main(){
    char vet[100] = "antonio";
    int tam = 7;
    int aux1;
    aux1 = Q4(vet, tam);
    printf("%d\n", aux1); // Impressão do resultado
}