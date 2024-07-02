#include <stdio.h>
#include <stdlib.h>

char *Q3 (int *M, char *NC) {
    int n;
    char *code = (char*)malloc(9 * sizeof(char));
    for (int i = 0; i < 9; i++) {
        code[i] = NC[M[i]];
        if (code[i] == ' ') code[i] = ' ';
    }
    return code;
}

int main() {
    int M[9] = {2, 2, 2, 0, 0, 6, 5, 5, 2
    };
    char NC[9] = {'a', 'n', 't', 'o', 'n', 'i', 'o'};
    char *code = Q3(M, NC);
    printf("%s\n", code);
    free(code);
    return 0;
}
