#include <stdio.h>
#include <stdlib.h>

/*O arquivo testes.txt traz em cada linha um valor inteiro referente à dimensão de um vetor. Faça um programa 
que carregue o arquivo testes.txt e tenha um menu com as seguintes opções:

a. T – Esta opção deve gerar um arquivo esforcocompucaional.txt. Cada linha de testes.txt deve gerar 
uma linha em esforcocompucaional.txt com as seguintes informações: [n , eB, eI], onde: n = dimensão 
do vetor V que deve ser alocado e preenchido com inteiros aleatórios (lida de testes.txt), eB = 
quantidade de operações do BubbleSort para ordenar V dividida por n; eI = quantidade de operações 
do insertSort para ordenar V dividida por n.

b. R – Esta opção deve ler o arquivo esforcocompucaional.txt e mostrar na tela as seguintes informações: 
Dados eB: Média, Melhor Caso (Menor eB), Pior Caso (Maior eB); Dados eI: Média, Melhor Caso 
(Menor eI), Pior Caso (Maior eI) 

c. S – Desalocar todas as estruturas de dados alocadas e encerrar o programa.*/

int main()
{
    FILE *pArqTeste, *pArqComp;
    int n, *V;   
    pArqTeste = fopen("testes.txt", "r");
    if(!pArqTeste){
        printf("Arquivo de Teste nao encontrado");
        return 0;
    }
    return 0;
    if (pArqComp = fopen("esforcocompucaional.txt", "r")){
        printf("Arquivo de Teste nao encontrado");
        return 0;
    }

    char opcao;

    printf("Escolha uma opcao:\n");
    printf("a. T\n");
    printf("b. R\n");
    printf("c. S\n");

    scanf("%c", &opcao);

    switch (opcao)
    {
        case 'a':
            pArqComp = fopen("esforcocompucaional.txt", "w");
            if(!pArqComp){
                printf("Arquivo de Teste nao encontrado");
                return 0;
            }
            while(fscanf(pArqTeste, "%d", &n) != EOF){
                V = gera_vet_aleatorio(n);
                fprintf(pArqComp, "[%d, %ld, %ld]\n", n, bs(n, V)/n, insercao(n, V)/n);
                free(V);
            }
            fclose(pArqComp);
            break;

        case 'b':
            pArqComp = fopen("esforcocompucaional.txt", "r");
            if(!pArqComp){
                printf("Arquivo de Teste nao encontrado");
                return 0;
            }
            int eB, eI;
            int eB_menor, eB_maior, eI_menor, eI_maior;
            int eB_soma = 0, eI_soma = 0;
            int cont = 0;
            while(fscanf(pArqComp, "[%d, %d, %d]", &n, &eB, &eI) != EOF){
                eB_soma += eB;
                eI_soma += eI;
                if (cont == 0){
                    eB_menor = eB;
                    eB_maior = eB;
                    eI_menor = eI;
                    eI_maior = eI;
                }
                else{
                    if (eB < eB_menor){
                        eB_menor = eB;
                    }
                    if (eB > eB_maior){
                        eB_maior = eB;
                    }
                    if (eI < eI_menor){
                        eI_menor = eI;
                    }
                    if (eI > eI_maior){
                        eI_maior = eI;
                    }
                }
                cont++;
            }
            printf("Dados eB: Media = %d, Melhor Caso = %d, Pior Caso = %d\n", eB_soma/cont, eB_menor, eB_maior);
            
        case 'c':
            free(V);
            fclose(pArqTeste);
            fclose(pArqComp);
            break;
    }
}