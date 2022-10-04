#include <stdio.h>

int main()
{
    int casos, i, j, cap, n, k, l, aux;
    int vetor[10];

    scanf("%d", &casos);

    for (i = 0; i < casos; i++)
    {

        scanf("%d", &n);

        for (j = 0; j < n; j++)
        {
            scanf("%d", &vetor[j]);
        }
        for (k = n - 1; k >= 1; k--)
        {
            for (l = 0; l < k; l++)
            {
                if (vetor[l] > vetor[l + 1])
                {
                    aux = vetor[l];
                    vetor[l] = vetor[l + 1];
                    vetor[l + 1] = aux;
                }
            }
        }
        cap = vetor[(n - 1) / 2];

        printf("Case %d: %d\n", i + 1, cap);
    }
    return 0;
}
