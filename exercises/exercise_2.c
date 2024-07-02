#include <stdio.h>

int main(){

    int idade;
    double pi;
    double distanc;
    char* pergunta;


    idade = 10;
    pi = 3.141592653589793;
    distanc = 149600000;
    pergunta = "Quantos anos você tem?";

    printf("Antonio é lindo e tem %d anos.\n\n", idade);
    printf("O número de pi vale %.5f.\n\n", pi);
    printf("A distância entre o planeta Terra e o Sol é de %.1e km.\n\n", distanc);
    printf("%s\n\n", pergunta);

}