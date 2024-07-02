// temos trẽs diferentes sintaxes de declaração de função para vetores:

#include <stdio.h>

void imprime1(int vet[], int TAM) {
    int i;
    for (i = 0; i < TAM; i++) {
        printf("%d ", vet[i]);
    }
}

void imprime2(int vet[5]) {
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d ", vet[i]);                       //A imprime1 e imprime2 tem a mesma lógica.
    }

}

void imprime3(int *vet, int TAM) {
    int i;
    for (i = 0; i < TAM; i++) {
        printf("%d ", vet[i]);
    }
}

int main(){

    int vet[5] = {1, 2, 3, 4, 5};
    puts("Primeiro imprime:");
    imprime1(vet, 5);   //Aqui passamos o vetor e o tamanho do vetor.

    puts("\nSegundo imprime:");
    imprime2(vet);   //Aqui passamos somente o vetor.

    puts("\nTerceiro imprime:");
    imprime3(vet, 5);   //Aqui passamos o vetor e o tamanho do vetor.

    // A diferença entre os três é que o tamanho do vetor só é passado como parâmetro na função imprime1 e imprime3 na main.
    
    return 0;

}