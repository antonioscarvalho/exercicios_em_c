#include <stdio.h>

int main(void){

    FILE *file1;
    file1 = fopen("string.txt", "a");
    /*para anexar ou inserir dados, usamos a letra "a" de append*/

    if(file1 == NULL){
        printf("Arquivo não foi encontrado.\n");
        return 0;
        /*esses returns 0 estão servindo para que você saia dos seus programas.*/
    }

    fprintf(file1, "\ntestando...\n");

    fprintf(file1, "\nAgora sim!\n");

    char frase[] = "Primeira linha.\n";
    /*essa função recebe dois argumentos: nosso vetor frase e seu ponteiro indicando para o arquivo.*/
    fputs(frase, file1);
    /*essa fputs significa file put string.*/

    char caractere = '2';
    fputc(caractere, file1);
    /*essa fputc significa file put char.*/

    fclose(file1);
    return 0;
}