//1444 - Corrida dos Marrecos
#include <stdio.h>

int main()
{
    int num, result, corrida;

    while (1)
    {
        scanf("%d", &num);
        if (!num)
            return 0;

        result = 0;

        while (num > 1)
        {
            corrida = 0;
            while (num % 3 != 0)
            {
                num -= 2;
                result++;
                corrida++;
            }

            result += num / 3;
            num = num / 3 + corrida;
        }
        printf("%d\n", result);
    }
    return 0;
}
