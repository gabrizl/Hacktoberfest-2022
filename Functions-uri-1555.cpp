#include <iostream>
 
using namespace std;
 
int main() {
 
  int x, y, n, i;
    int r, b, c;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);

        r = ((3 * x) * (3 * x)) + y * y;
        b = 2*(x * x) + ((5 * y) * (5 * y));
        c = -100 * x + (y * y * y);

        if (c > b && c > r)
            printf("Carlos ganhou\n");
        if (b > c && b > r)
            printf("Beto ganhou\n");
        if (r > b && r > c)
            printf("Rafael ganhou\n");
    }
 
    return 0;
}
