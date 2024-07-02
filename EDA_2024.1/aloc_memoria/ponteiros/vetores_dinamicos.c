#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, *Vetor1, *Vetor2;

    printf("Digite um número:\n\n");
    scanf("%d", i);

    Vetor1 = (int*) malloc (i*sizeof(int)); /*void* malloc (size_t qtde);
                                            qtde: quantidade de bytes a serem alocados.*/

    /*malloc: tipo do dado *nome = (tipo do dado *) malloc (sizeof(tipo do dado) * tamanho);*/ 

    Vetor2 = (int*) calloc (i, sizeof(int)); /*void* calloc (size_t qtde, size_t tam);
                                            qtde: quantidade de elementos a serem alocados.
                                            tam: tamanho (em bytes) de cada elemento.*/

    /*calloc: tipo do dado * nome = (tipo do dado *) calloc (tamanho, sizeof(tipo do dado));*/

    printf("%p", Vetor1);
    printf("%p", Vetor2);

    free(Vetor1);
    free(Vetor2);

    return 0;


}