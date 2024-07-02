#include<stdio.h>
int main(){
    FILE *fp; //é criado um ponteiro de arquivo chamado fp
    char ch;
    int i = 0;
    fp = fopen ( "arquivo1.txt", "r" ); /*podemos ver que ele irá tentar abrir o arquivo1 e ler o conteúdo, esse arquivo não 
                                        poderá ser modificado. Só colocando um w ou a para isso.*/

    if (fp == NULL) {
        printf("Erro ao abrir o arquivo.");
        return 1; // Sair do programa com código de erro
    }
    while ( 1 )
    {
        ch = fgetc(fp); //a função fgetc vai ler o conteúdo do arquivo da memória
        if(ch==EOF) //se a variável ch chegar ao fim (EOF = End Of File), irá parar
            break;
        printf("%c", ch); //imprime o caractere lido
        i++; //se não for o fim, o contador i vai contar mais um índice
    }
    printf("\n\n-Quantidade de Caracteres: %d\n\n",i);
    fclose ( fp );
    return 0;
}