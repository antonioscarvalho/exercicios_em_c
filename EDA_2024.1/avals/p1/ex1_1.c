#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
};

void gravar(FILE * arquivo, struct Pessoa p) { // Altera o tipo de retorno da função para void
    fprintf(arquivo, "%s_%d", p.nome, p.idade); // Escreve o nome e a idade da pessoa no arquivo
}

int main () {
    FILE *arquivo = fopen("arquivo.txt", "w"); // Abre o arquivo para escrita
    struct Pessoa p = {"Joao", 20}; // Cria uma pessoa com nome Joao e idade 20
    gravar(arquivo, p); // Chama a função gravar para escrever a pessoa no arquivo
    fclose(arquivo); // Fecha o arquivo
    return 0;
}