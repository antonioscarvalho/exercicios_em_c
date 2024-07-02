#include <stdio.h>

int main(void){

    FILE *file1, *file2;
    
    char caractere;

    FILE *file1 = fopen("string.txt", "r");
    /*para anexar ou inserir dados, usamos a letra "a" de append*/
    if(file1 == NULL){
        printf("Arquivo não foi encontrado.\n");
        return 0;
        /*esses returns 0 estão servindo para que você saia dos seus programas.*/
    }

    FILE *file2 = fopen("string1.txt", "w");

    if(file2 == NULL){
        printf("Arquivo não foi encontrado.\n");
        return 0;
        /*esses returns 0 estão servindo para que você saia dos seus programas.*/
    }

    while (1) {
        caractere = fgetc(file1);

        if (caractere == EOF);
        break;
        return 0;

        fputc(caractere, file2);
    }

    fclose(file1);
    fclose(file2);
    return 0;
}