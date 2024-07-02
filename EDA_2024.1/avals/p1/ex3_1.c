#include <stdio.h>

int buscarCar (char *str, char c, int posicao_atual) { // Altera o tipo de retorno da função para int
    
    if (*str == '\0') { // Verifica se o caractere atual é o caractere nulo
        return -1;
    }
    if (*str == c) { // Verifica se o caractere atual é igual ao caractere c
        return posicao_atual;
    }
    return buscarCar(str + 1, c, posicao_atual + 1); // Chama a função recursivamente com o próximo caractere e a próxima posição

}

int main() {
    char str[] = "Hello, World!"; // Cria uma string
    char c = 'o'; // Cria um caractere
    int posicao = buscarCar(str, c, 0); // Chama a função buscarCar para buscar o caractere c na string str
    printf("Posicao do caractere %c na string: %d\n", c, posicao); // Imprime a posição do caractere c na string
    return 0;
}