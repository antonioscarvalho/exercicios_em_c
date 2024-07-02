#include <stdio.h>

int main() {
    FILE *pointer;
    pointer = fopen("paocommortadela.txt", "w");
    fprintf(pointer, "Pao com mortadela");
    fclose(pointer);
}