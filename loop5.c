// 1^3 + 3^3 + 5^3+....+n^3
#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i += 2)
    {
        sum = sum + (i * i * i);
    }
    printf("%d\n", sum);
    return 0;
}