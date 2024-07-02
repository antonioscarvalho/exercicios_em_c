#include <stdio.h>

int main(void){

    FILE *file1;
    file1 = fopen("numero.txt", "r");
    /*r de read*/

    if(file1 == NULL){
        printf("Arquivo não foi encontrado.\n");
        return 0;
        exit(0);
        /*esses returns 0 estão servindo para que você saia dos seus programas.*/
    }
    
    char ch;

    ch = fgetc(file1);

    /*Ler o que há no arquivo ao mesmo tempo que pega seus caracteres para contar*/
    while (1) {
        if (ch == EOF)
           break;
    /*se chegar ao final, será parada a contagem de caracteres no arquivo.*/
        fscanf("%c", ch);
    }

    fclose(file1);

    return 0;

    exit(0);
}