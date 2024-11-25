//sum fibonacci n numbers
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the value of N = ");
    scanf("%d", &n);
    int fib[n], sum = 0;
    fib[0] = 1;
    fib[1] = 1;
    for (i = 2; i < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + fib[i];
    }
    printf("The sum of the series = %d\n", sum);
    return 0;
}