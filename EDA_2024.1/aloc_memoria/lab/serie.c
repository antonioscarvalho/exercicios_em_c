#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,count=0;
    float soma;

    scanf("%d", &n);

    int *v = (int *)malloc((n+1) * sizeof(int));

    for (i = 0; i <= n; i++)
    {
        scanf("%d", &v[i]);
    }

    v[n+1] = n;
        
    for(i = 1; i <=n ; i++)
    {
        soma += i/v[i];

        if (i < v[i])
        {
            count += 1;
        }

    }


}