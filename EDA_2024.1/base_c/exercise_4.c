#include <stdio.h>

int main () {

    int sum, sub, mult, a, b, opcao, resposta;
    float div;

    printf("Declare um valor inteiro para A:\n");
    scanf("%d", &a);

    printf("Declare um valor inteiro para B:\n");
    scanf("%d", &b);

    printf("Você deseja realizar alguma operação? 1 para sim ou 2 para não\n\n");
    scanf("%d", &resposta);

    if (resposta == 1) {

        printf("Bom, agora você deseja realizar qual operação? (1 para +, 2 para -, 3 para * ou 4 para /)\n\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            sum = a + b;
            printf("\na resposta para a operação é: %d\n\n", sum);
            break;
        case 2:
            sub = a - b;
            printf("\na resposta para a operação é: %d\n\n", sub);
            break;
        case 3:
            mult = a * b;
            printf("\na resposta para a operação é: %d\n\n", mult);
            break;
        case 4:
            div = a / b;
            printf("\na resposta para a operação é: %2f\n\n", div);
        default:
            break;
        }
    } else {
        printf("então, faloras!\n");
    }
}
/*"Soma de %d", a, "+ %d", b, "= %d\n",*/
/*"Subtração de %d", a, "- %d", b, "= %d\n", */
/*"Multiplicação de %d", a, "* %d", b, "= %d\n", */
/*"Divisão de %d", a, "/ %d", b, "= %d\n", */