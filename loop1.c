// 5+10+15+...+100
#include <stdio.h>
int main()
{
    int i, sum = 0;
    for (int i = 5; i <= 100; i += 5)
    {
        sum = sum + i;
    }
    printf("%d\n", sum);
    return 0;
}