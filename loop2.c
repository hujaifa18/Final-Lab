// 1+2+4+...+1024
#include <stdio.h>
int main()
{
    int i, sum = 0;
    for (int i = 1; i <= 1024; i *= 2)
    {
        sum = sum + i;
    }
    printf("%d\n", sum);
    return 0;
}