#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, count = 0;
    float soma = 0; // Inicializa soma

    scanf("%d", &n);

    int *v = (int *)malloc((n + 1) * sizeof(int));

    for (i = 0; i < n; i++) // Corrige o loop, altera i < n
    {
        scanf("%d", &v[i]);
    }

    v[n] = n; // Corrige o índice do vetor

    for (i = 1; i <= n; i++) // Corrige a condição do segundo loop
    {
        soma += i / v[i];

        if (i > v[i])
        {
            count += 1;
            printf("%d,%d\n", i, v[i]);
        }
    }
    printf("Soma: %f\n", soma); // Adiciona um print para debug
    printf("Count: %d\n", count); // Adiciona um print para debug
    free(v); // Libera a memória alocada

    return 0; // Retorna 0 para indicar sucesso
}
