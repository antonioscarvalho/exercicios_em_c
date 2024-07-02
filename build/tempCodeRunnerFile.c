// melhorando o caso usando switch

#include <stdio.h>

int main () {

    float val;
    int opc;

    printf("Escolha a opção de pagamanto:\n"
      "À vista, com 10 por cento de desconto:               Digite [1]\n"
      "À vista no cartão, com 5 por cento de desconto:      Digite [2]\n"
      "Em até 2x no cartão, a preço normal:                 Digite [3]\n"
      "3x ou mais, no cartão, com 20 por cento de juros:    Digite [4]\n");

    printf("Qual o valor a ser pago para a compra do produto?\n");
    scanf("%f", &val);

    printf("Digite a opção de compra:\n");
    scanf("%d", &opc);

    vist = val - (val * 0.10);

    cart = val - (val * 0.05);

    xx = val / 2;

    xxx = val + (val * 0.20);

    if (opc == 1) {
        printf("O valor a ser pago à vista é: R$%.2f\n\n", vist);
    }
    if (opc == 2) {
        printf("O valor a ser pago à vista no cartão é: R$%.2f\n\n", cart);
    }
    if (opc == 3) {
        printf("O valor a ser pago em 2 vezes no cartão continua no mesmo valor, com R$%.2f\n\n sendo pagos ao mês", xx);
    }
    if (opc == 4) {
        printf("O valor total a ser pago em 3 vezes no cartão fica: R$%.2f no total \n\n", xxx);
    }


}