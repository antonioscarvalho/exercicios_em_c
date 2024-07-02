#include <stdio.h>
#include <stdlib.h>

int Q1 (int valor){
    int *ptr, *pnumeros, pn=valor%10, pp, psoma=0; 
    if (pn<2) pn = 5 - pn; // Condição de parada
    pnumeros = (int *) malloc(pn * sizeof(int)); // Alocação dinâmica
    ptr = pnumeros;
    for (pp=0; pp<pn; pp++){ // Cálculo dos números
        *ptr = valor%10; 
        valor = valor/10; // Atualização do valor
        ptr++;
    }
    for (pp=0; pp<pn; pp++){ // Soma dos números ímpares
        if((pnumeros[pp]%2)==1) // Condição de ímpar
        psoma = psoma + pnumeros[pp]; // Soma dos números
    }
    free(pnumeros);
    return psoma;
}

int main(){
    int valor;
    scanf("%d", &valor); // Leitura do valor 
    printf("%d\n", Q1(valor)); // Impressão do resultado
    return 0;
}