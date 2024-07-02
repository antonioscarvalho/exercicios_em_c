#include <stdio.h>
#include <stdlib.h>

int EhIgual(int *veta, int *vetb, int ptama, int ptamb){

    veta = (int*)calloc(ptama , sizeof(int));
    vetb = (int*)calloc(ptamb , sizeof(int));

    veta[0] = 1;
    vetb[0] = 1;
    remove[vetb[0]];


    if (veta == vetb){
        printf("Os vetores são iguais\n");
        return 1;
    } else {
        printf("Os vetores são diferentes\n");
        return 0;
    }
    free(veta);
    free(vetb);
}

int main(void){

    int *ptr1, *ptr2;

    EhIgual(ptr1,ptr2, 5, 5);
    
    return 0;
    
}