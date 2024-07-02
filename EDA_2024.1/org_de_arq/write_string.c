#include <stdio.h>

int main(void){

    FILE *file1;
    file1 = fopen("string.txt", "r");
    /*r de read*/

    if(file1 == NULL){
        /*linha pra ver se o comando do ponteiro achou ou não o conteúdo do arquivo.*/
        printf("Arquivo não foi encontrado.\n");
        return 0; //or exit(0);
        /*esses returns 0 estão servindo para que você saia dos seus programas.*/
    }
    /*é importante destacar que se esse arquivo txt não estivesse neste diretório, você obrigató-
    riamente teria que colocar todo o caminho para chegar até esse arquivo.*/
    
    char frase[100];

    /*esse fgets significa file get string*/
    while(fgets(frase, 100, file1) != NULL){

        printf("%s", frase);

    }
    /*100 é a quantidade de caracteres que frase pode segurar*/
    printf("\n\n");
    fclose(file1);

    return 0;
}