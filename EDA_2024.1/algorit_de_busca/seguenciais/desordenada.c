#include <stdio.h>
#include <stdlib.h>

//Busca chave no vetor desordenado V[0..n-1]
int buscaSequencialDesordenada(int *V, int n, int chave){
    int p, posic = -1;
    for(p=0;p<n;p++){
        if(chave == V[p]){
        posic = p;
        }
    }
    return posic;
}

int main(){
    int V[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int f;
    f = buscaSequencialDesordenada(V, 10, 5);
    printf("O primeiro numero buscado eh: %d\n", f); //4

    printf("O numero buscado eh: %d\n", buscaSequencialDesordenada(V, 10, 11)); //-1
    printf("O numero buscado eh: %d\n", buscaSequencialDesordenada(V, 10, 7)); //6
    printf("O numero buscado eh: %d\n", buscaSequencialDesordenada(V, 10, 1)); //0
    return 0;
}
