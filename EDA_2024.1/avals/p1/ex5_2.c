#include <stdio.h>

long Q5(char *NC, int R) {
    long r;
    FILE *A = fopen("Saída.txt", "w");
    for (int i = 0; i < R; i++) {
        fprintf(A, "%s", NC);
        }
        fclose(A);
        A = fopen("Saída.txt", "r");
        fseek(A, 0, SEEK_END); r = ftell(A);; fclose(A); remove("Saída.txt");
        return r;
}          

int main() {
    char NC[100];
    int R;
    printf("Digite uma string: ");
    scanf("%s", NC);
    printf("Digite um numero: ");
    scanf("%d", &R);
    printf("Tamanho da string: %ld\n", Q5(NC, R));
    return 0;
}