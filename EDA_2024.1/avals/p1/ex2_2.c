#include <stdio.h>
#include <string.h>

void Q2(char *str) {
    int n = strlen(str); 
    for (int i = 0; i < n; i++) { 
        for (int j = i + 1; j < n; j++) { 
            if (str[i] > str[j]) {
                char temp = str[i]; 
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char str[100];
    printf("Escreva uma palavra: ");
    scanf("%s", str);
    Q2(str);
    printf("Palavra com letras ordenadas de acordo com o alfabeto: %s\n", str);
    return 0;
}