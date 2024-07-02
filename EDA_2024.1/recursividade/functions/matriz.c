#include <stdio.h>

void imprime(int matriz[][4], int TAM) { //função que imprime uma matriz de inteiros
    int i, j;
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n\n");
    }
}

int main (){
    int matriz[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    imprime(matriz, 3); // chamada da função imprime
    return 0;
}