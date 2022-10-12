//1457 - Oráculo de Alexandria
#include <stdio.h>
#include <string.h>

int main(void)
{
    int T;

    scanf("%d", &T);

    while (T--)
    {
        long long int N;
        int tam;
        char K[20];
        int vetor[20];

        scanf("%lld %s", &N, K);
        tam = strlen(K);

        int X = 1, cont = 0;
        int num = N;
        while (num >= 1)
        {
            num = N - (X * tam);
            if (num >= 1)
            {
                vetor[cont] = num;
                X++;
                cont++;
            }
        }
        while (cont--)
        {
            N *= vetor[cont];
        }
        printf("%lld\n", N);
    }

    return 0;
}
