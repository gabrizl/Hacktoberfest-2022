#include <stdio.h>
int main()
{
    //M - pedra onde está o presente
    //N - total de pedras
    int m, n;

    while (scanf("%d %d", &n, &m))
    {

        if (n == 0 && m == 0)
            break;

        int i = 2;
        int a = 1;
        int d = 0;


        if (m > 34)
        {
            printf("Let me try!\n");
        }

        else
        {
            while (a > 0 && a < n + 1)
            {
                if (a == m)
                {
                    d++;
                    break;
                }

                else if (a < m)
                {
                    if (a + (2 * i - 1) < n + 1)
                        a += 2 * i - 1;
                    else
                        a -= 2 * i - 1;
                    i++;
                }

                else
                {
                    if (a - (2 * i - 1) > 0)
                        a -= 2 * i - 1;
                    else
                        a += 2 * i - 1;
                    i++;
                }
            }

            if (d != 0)
                printf("Let me try!\n");
            else
                printf("Don't make fun of me!\n");
        }
    }
    return 0;
}

