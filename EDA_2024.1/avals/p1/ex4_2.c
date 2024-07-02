#include <stdio.h>
#include <string.h>

int Verifica(char c) {
    return (c>='a' && c <='z' && c != 'a' && c!= 'e' && c!='i' && c!='o' && c!='u');
}

int Q4 (char *NC, char L, int pos) {//NC = Nome completo, L = Letra
    if (NC[0] == '\0' || pos < 0 || pos >= strlen(NC)) { 
        return -1;
    }
    if (NC[pos] == L && Verifica(NC[pos + 1])) {
        return pos;
    }
    return Q4(NC, L, pos + 1);
}

int main() {
    char NC[100], L;
    int pos;
    printf("Digite uma string: ");
    scanf("%s", NC);
    printf("Digite um caractere: ");
    scanf(" %c", &L);
    pos = Q4(NC, L, 0);
    if (pos == -1) {
        printf("Nao existe\n");
    } else {
        printf("Existe na posicao %d\n", pos);
    }
    return 0;
}