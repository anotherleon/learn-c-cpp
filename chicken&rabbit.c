#include <stdio.h>

int main()
{
    int a, b, m, n;
    scanf("%d%d", &n, &m);
    a = (4 * n - m) / 2;
    b = n - a;

    if (a % 1 != 0 || a < 0 || b < 0)
        printf("No answer\n");
    else
        printf("%d %d\n", a, b);
    return 0;
}