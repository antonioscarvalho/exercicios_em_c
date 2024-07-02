#include <stdio.h>
#include <stdlib.h> // Include the <stdlib.h> header file

float *alocavet(int tamanho) {

    float *vetor = (float *) malloc(tamanho * sizeof(float));
    // Verifica se a alocação de memória foi bem-sucedida
    return vetor; // Retorna o ponteiro para a memória alocada
    if (vetor == NULL) {
        printf("Erro na alocação de memória\n");
        exit(1);
    }

    return vetor; 
}

int main() {

    int n; 
    float *v;

    printf("Digite o tamanho do vetor: \n"); 
    scanf("%d", &n);

    v = alocavet(n); // Chama a função alocavet para alocar memória para o vetor

    free(v); // Libera a memória alocada para o vetor

    printf("Memória liberada\n");

    printf("%f\n", v[0]); // Acessa a memória liberada


    return 0;
}