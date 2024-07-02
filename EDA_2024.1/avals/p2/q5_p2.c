#include <stdio.h>
#include <stdlib.h>

int Q5 (char vetor[], int tamanho){
    int trocas = 0, j, i;   
    char chave;
    for(i = 1; i < tamanho; i++){ // Insertion Sort 
        
        chave = vetor[i];
        j = i - 1;
        
        while(j >= 0 && vetor[j] > chave){ // Troca de elementos
            vetor[j + 1] = vetor[j];
            j--;
            trocas++; // Contador de trocas
            
        }
        
        vetor[j + 1] = chave; // Troca de elementos
        printf("vetor a cada troca: %s\n\n", vetor);
        
    }
    return trocas;
}

int main(){
    char vet[100] = "antonio";
    int tam = 7;
    printf("%d\n", Q5(vet, tam)); 
}