#include <stdio.h>

int main(){

    char s;

    while (s != "f" || s != "m") {
        printf("Digite seu sexo [M/F]: \n");
        scanf("%c", &s);
        if(s == 'M'){
            printf("Entendo, seu sexo é %casculino, então.\n", s);
        }
        if(s == 'F'){
            printf("Entendo, seu sexo é %ceminino, então.\n", s);
        }
        else if(s != 'M' && s != 'F'){
            printf("Opção inválida, tente novamente.\n", s);
        }
        printf("FIM\n");
    }

}