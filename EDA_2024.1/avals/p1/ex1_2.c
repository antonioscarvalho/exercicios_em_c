#include <stdio.h>
#include <stdlib.h>

int Q1 (int valor) {
    int *ptr, *pnumeros, pn=valor%10, pp, psoma=0; // pn = quantidade de digitos
    if (pn<2) pn = 5 - pn; // pn = 5 - pn se pn < 2 
    pnumeros = (int *)malloc(pn*sizeof(int)); // aloca memoria para pn inteiros
    ptr = pnumeros; // ptr aponta para o inicio do vetor
    for (pp=0; pp<pn; pp++) { // enquanto pp < pn
        *ptr = valor%10;    // *ptr recebe o resto da divisao de valor por 10
        valor = valor/10;   // valor recebe o valor da divisao inteira de valor por 10
        ptr++;              // ptr aponta para o proximo endereco
    }
    for (pp=0; pp<pn; pp++) { // enquanto pp < pn
        if ((pnumeros[pp]%2)==1) { // se o resto da divisao de pnumeros[pp] por 2 for 1
            psoma = psoma + pnumeros[pp]; // psoma recebe psoma + pnumeros[pp]
        }
    }
    return psoma; // retorna psoma
}

int main() {
    int valor, soma;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    soma = Q1(valor);
    printf("Soma dos digitos de alocação: %d\n", soma);
    return 0;
}