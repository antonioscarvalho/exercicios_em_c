#include <stdio.h>

int main(void){

    FILE *file1;
    file1 = fopen("numero.txt", "r");
    /*r de read*/

    if(file1 == NULL){
        printf("Arquivo não foi encontrado.\n");
        return 0;
        /*esses returns 0 estão servindo para que você saia dos seus programas.*/
    }
    
    /*é importante destacar que se esse arquivo txt não estivesse neste diretório, você obrigató-
    riamente teria que colocar todo o caminho para chegar até esse arquivo.*/
    
    /*lembra que ao criar o write_file, você usou fprinf, agora vamos utilizar o fscanf:*/
    int x, y;
    
    fscanf(file1, "%i %i", &x, &y);

    /*você vai fazer quase a mesma coisa que um fscanf normal, a diferença é que por ser algo rela-
    cionado a abertura de arquivos, você deve colocar um ponteiro para selecionar o local de arqui-
    vo.*/

    printf("%i, %i\n", x, y);

    fclose(file1);

    return 0;
}