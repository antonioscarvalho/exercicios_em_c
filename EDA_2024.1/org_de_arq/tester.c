#include <stdio.h>

int main() {

    FILE *pointer;

    pointer = fopen("paocommortadela.txt", "r");

    fputs("oloko meu", pointer);

    fclose(pointer);

}