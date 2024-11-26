// fahrenheit to celsius
#include <stdio.h>
int main()
{
    int c, f;
    printf("Enter Fahrenheit = ");
    scanf("%d", &f);
    c = (5 * (f - 32)) / 9;
    printf("Celsius = %d\n", c);
    return 0;
}