#include <stdio.h>

int main() {

    char p;
    float t, FC, CF;

    printf("Escolha a opção de temperatura que deseja ver:\n"
        "De Fahrenheit para Celcius:                           Digite [C]\n"
        "De Celcius para Fahrenheit:                           Digite [F]\n"
        "Sair:                                                 Digite [S]\n\n");

    while (p != 's') {
        scanf("%c", &p);
        if (p == 'c') {
            printf("\nEscreva um valor em graus Fahrenheit para convertê-lo em graus Celsius:\n\n");
            scanf("%f", &t);
            CF = (t-32)/1.8;
            printf("\nA temperatura em graus Celsius é: %2f\n\n", CF);
            
        } else if (p == 'f') {
            printf("\nEscreva um valor em graus Celsius para convertê-lo em graus Fahrenheit:\n\n");
            scanf("%f", &t);
            FC = (t * 1,8) + 32;
            printf("\nA temperatura em graus Fahrenheit é: %2f\n\n", FC);
            
        } else {
            printf("\nAté mais.\n\n");
        }
        break;
    }
}