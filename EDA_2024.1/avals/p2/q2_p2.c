#include <stdio.h>
#include <stdlib.h>

char letraCorrespondente(int P){
    P = P % 26; // Resto da divisão por 26
    printf("P = %d\n", P);
    printf("'a' + P = %c\n", 'a' + P);
    return 'a' + P; // Retorno da letra correspondente
    
}

int Q2(char *NomeCompleto, int matricula){ // Busca Sequencial
    int p=0, posic = -1, i, f;
    i = 222006552 % 100; // Resto da divisão por 100
    printf("i = %d\n", i);
    f = 52 % 10; // Resto da divisão por 10
    printf("f = %d\n", f);
    char chave = letraCorrespondente(matricula % 100); // Chave de busca
    printf("chave: %c\n", chave);
    while (NomeCompleto[p] != '\0'){ 
        if (NomeCompleto[p] == chave){ // Comparação de elementos
            posic = p; 
        }
        p++;
    }
    return posic; // Retorno da posição
}

int main(){
    char NomeCompleto1[100] = "antonio amadeu de sousa carvalho";
    int matricula1 = 222006552;
    printf("%d\n", Q2(NomeCompleto1, matricula1)); // Impressão do resultado
}