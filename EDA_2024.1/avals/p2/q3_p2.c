#include <stdio.h>
#include <stdlib.h>

int Q3 (char *Nome, int tamanho, int matricula){
    int inicio = 0, fim = tamanho-1, pcont = 0, meio;
    char chave = Nome[matricula%10];
    printf("chave: %c\n", chave);
    while (inicio <= fim){ // Busca binária
        pcont++;
        meio = (inicio + fim)/2; // Cálculo do meio
        printf("meio no pcont %d: %d\n\n", pcont, meio);
        if (Nome[meio] == chave){ // Comparação de elementos
            break;
        }
        else if (Nome[meio] > chave) // Troca de elementos
            fim = meio - 1;
        else
            inicio = meio + 1; // Troca de elementos
    }
    return pcont; // Retorno do contador
}

int main(){
    int tam, matricula1;
    char nome[32] = "    aaaaaacddeehilmnnoooorsstuuv";
    matricula1 = 222006552;
    tam = 32;
    printf("%d\n", Q3(nome, tam, matricula1)); // Impressão do resultado
}