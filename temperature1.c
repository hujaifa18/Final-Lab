// celsius to fahrenheit
#include <stdio.h>
int main()
{
    int c, f;
    printf("Enter celsius = ");
    scanf("%d", &c);
    f = (c * 9 / 5) + 32;
    printf("Fahrenheit = %d\n", f);
    return 0;
}