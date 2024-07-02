#include <stdio.h>

int main(void) {
/*Uma variável do tipo file, visto que para acessar um arquivo é preciso criar um pnteiro para acessar 
esse tipo de dado.*/
/*Esse * aí que é o ponteiro.*/
    FILE *firstpointer;
    firstpointer = fopen("teste.txt", "w");
/*Dentro desse fopen há o nome do arquivo já direcionado ao local que ele estará e um 2° argumento:*/
/*Pode-se colocar diferentes funcionalidades nesse segundo argumento que farão atividades com esse arguivo.*/
/*As três principais funcionalidades são indicadas pela letra "r" para ler (read), "w" para escrever (write) e "a" para alterar (append). */
    fprintf(firstpointer,"Hello, user!");
/*Para escrever algo no arquivo (file), você deve colocar como se fosse um prefixo f para indicar que irá printar em um file.*/
/*A fprinf também recebe dois argumentos, um é um ponteiro  que geralmente é indicado por por aquele ponteiro
escrito acima "firstpointer" e o outro*/
    fclose(firstpointer);
/*Para fechar as edições ou leituras, como se fosse um "salvar" das ferramentas Microsoft, o fclose é funcional.*/
/*Por fins de segurança, é recomendado sempre colocar o fclose no final, pois não é uma regra, mas garante uma boa execução.*/
    return 0;
}