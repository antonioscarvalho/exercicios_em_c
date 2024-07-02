#include <stdio.h>
#include <stdlib.h>

//Busca chave no vetor ordenado V[0..n-1]
int buscaBinaria(int *V, int tam, int chave){
    int inicio, final, meio;
    inicio = 0; 
    final = tam - 1;
    while(inicio <= final){
        meio = (inicio + final)/2;
        if (chave == V[meio])
            return meio;
        if (chave < V[meio])
            final = meio - 1;//busca nos valores menores
        else
            inicio = meio + 1;//busca nos valores maiores
    }
    return -1; //chave não encontrada
}

int main(){
    int V[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int f;
    f = buscaBinaria(V, 10, 5);
    printf("%d\n", f); //4

    printf("O numero buscado eh: %d\n", buscaBinaria(V, 10, 11)); //-1
    printf("O numero buscado eh: %d\n", buscaBinaria(V, 10, 7)); //6
    printf("O numero buscado eh: %d\n", buscaBinaria(V, 10, 1)); //0
    return 0;
}