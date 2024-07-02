#include <stdio.h>
// Função para trocar o valor de duas variáveis float:
void trocarValores(float *ptr3, float *ptr4) {
    float temp = *ptr3; //Armazena o valor de ptr1 em uma variáv5 *ptr1 = *ptr2; //Atribui o valor de ptr2 a ptr1
    *ptr3 = *ptr4; //Atribui o valor de ptr2 a ptr1
    *ptr4 = temp; //Atribui o valor temporário a ptr2
}

int main() {

    int numero, numero1, numero2, *ptr, *ptr1;

    float a = 3.14;

    float b = 2.71;

    printf("Valores originais: a = %.2f, b = %.2f\n\n", a, b);
//Chama a função para trocar os valores de 'a' e 'b':
    trocarValores(&a, &b);
    printf("Valores trocados: a = %.2f, b = %.2f\n\n", a, b);

    numero = 79417;
    //Valor de 'numero'
    printf("Valor: %d\n\n", numero);
    //Endereço de 'numero'
    printf("Endereço: %p\n\n", &numero);

    numero1 = 79418;
    ptr = NULL;
    printf("%d\n\n", numero1);
    printf("%p\n\n", ptr);

    numero2 = 79417;
    ptr1 = &numero2;
    printf("%d\n\n", numero2);
    *ptr1 = 90560;
    printf("%d\n\n", numero2);

    return 0;
}