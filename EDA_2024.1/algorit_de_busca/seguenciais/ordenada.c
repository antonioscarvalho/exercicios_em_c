#include <stdio.h>
#include <stdlib.h>

//Busca chave no vetor ordenado V[0..n-1]
int buscaSequencialOrdenada(int *V, int n, int chave) {
    int p=0, posic = -1;
    while (p < n && chave <= V[p]){
        if(V[p]==chave){
            posic = p;
            break;
        }
        p++;
    }
    return posic;
}

int main(){
    int V[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int f;
    f = buscaSequencialOrdenada(V, 10, 5);
    printf("%d\n", f); //4

    printf("O numero buscado eh: %d\n", buscaSequencialOrdenada(V, 10, 11)); //-1
    printf("O numero buscado eh: %d\n", buscaSequencialOrdenada(V, 10, 1)); //0
    return 0;
}