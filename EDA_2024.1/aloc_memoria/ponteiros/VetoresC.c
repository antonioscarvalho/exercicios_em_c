#include <stdlib.h>
#include <stdio.h>
#include <VetorC.h>

// Função para alocar um vetor de inteiros

int* CriaVetInt(int tamanho) {
    int* vetor1 = (int*)malloc(tamanho * sizeof(int));
    if (vetor1 == NULL) {
        printf("Erro ao alocar vetor de inteiros.\n");
        exit(1);
    }
    return vetor1;
}

// Função para alocar um vetor de floats

float* CriaVetFloat(int tamanho) {
    float* vetor2 = (float*)malloc(tamanho * sizeof(float));
    if (vetor2 == NULL) {
        printf("Erro ao alocar vetor de floats.\n");
        exit(1);
    }
    return vetor2;
}

// Função para liberar a memória alocada para um vetor de inteiros
void LiberaVetInt(int* vetor1) {
    free(vetor1);
}

// Função para liberar a memória alocada para um vetor de floats
void LiberaVetFloat(float* vetor2) {
    free(vetor2);
}

int main () {
    int* vetor1 = CriaVetInt(10);
    float* vetor2 = CriaVetFloat(10);
    LiberaVetInt(vetor1);
    LiberaVetFloat(vetor2);
    return 0;
}