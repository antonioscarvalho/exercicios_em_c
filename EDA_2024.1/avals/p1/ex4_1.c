#include <stdio.h>
#include <string.h> // Include the <string.h> header file for the strlen function

int epalindromo (char *palavra, int inicio, int fim) { // Altera o tipo de retorno da função para int

    if (inicio >= fim) { // Verifica se o início é maior ou igual ao fim
        return 1;
    }
    if (palavra[inicio] != palavra[fim]) { // Verifica se o caractere no início é diferente do caractere no fim
        return 0;
    }
    return epalindromo(palavra, inicio + 1, fim - 1); // Chama a função recursivamente com o próximo caractere no início e o próximo caractere no fim
    
}

int main() {

    char palavra[50]; // Declara um vetor de caracteres para armazenar a palavra
    int resultado; // Declara uma variável para armazenar o resultado da função epalindromo

    printf("Digite uma palavra: \n"); // Solicita ao usuário que digite uma palavra
    scanf("%s", palavra); // Lê a palavra digitada pelo usuário

    resultado = epalindromo(palavra, 0, strlen(palavra) - 1); // Chama a função epalindromo para verificar se a palavra é um palíndromo

    if (resultado == 1) { // Verifica se o resultado é igual a 1
        printf("A palavra %s é um palíndromo\n", palavra); // Imprime que a palavra é um palíndromo
    } else {
        printf("A palavra %s não é um palíndromo\n", palavra); // Imprime que a palavra não é um palíndromo
    }

    return 0;
}