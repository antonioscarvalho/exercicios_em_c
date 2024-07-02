#include <stdio.h>
#include <ctype.h> // Para usar a função tolower()

int main() {
    FILE *inputFile, *outputFile;
    char word[100]; // Tamanho máximo de uma palavra

    // Abre o arquivo de entrada
    inputFile = fopen("exemplo.txt", "r");
    if (inputFile == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    // Abre o arquivo de saída
    outputFile = fopen("exemplo2.txt", "w");
    if (outputFile == NULL) {
        printf("Erro ao criar o arquivo de saída.\n");
        fclose(inputFile);
        return 1;
    }

    // Lê palavras do arquivo de entrada e escreve no arquivo de saída
    while (fscanf(inputFile, "%s", word) != EOF) {
        // Pré-processamento: converter para minúsculas
        for (int i = 0; word[i]; i++) { // Enquanto word[i] != '\0'
            word[i] = tolower(word[i]); // Converte para minúsculas
        }
        fprintf(outputFile, "%s\n", word);
    }

    // Fecha os arquivos
    fclose(inputFile);
    fclose(outputFile);

    printf("Palavras gravadas no arquivo de saída.\n");

    return 0;
}
