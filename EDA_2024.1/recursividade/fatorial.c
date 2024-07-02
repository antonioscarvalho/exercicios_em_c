#include <stdio.h>

// A função fatorial é definida para calcular o fatorial de um número inteiro n.
int fatorial(int n) {  
    // Caso base: se n for 0 ou 1, o fatorial é 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Caso recursivo: calcular o fatorial de n-1 e multiplicar por n
    else {
        return n * fatorial(n - 1); 
        /*Se n não for 0 ou 1, o programa chama 
        recursivamente a função fatorial passando n - 1 
        como argumento e multiplica o resultado por n. 
        Isso significa que o fatorial de n é o mesmo 
        que n multiplicado pelo fatorial de n - 1.*/
    }
    /*O processo continua até que n seja reduzido a 1, 
    momento em que a recursão atinge o caso base e 
    começa a desenrolar, retornando valores para 
    calcular o fatorial original.*/
}

int main() {
    int num = 5;
    printf("O fatorial de %d é %d\n", num, fatorial(num));
    return 0;
}
