// Palindrome without builtin function
#include <stdio.h>

int main()
{
    char x[30], y[30];
    int length;

    printf("Enter a word = ");
    scanf("%s", x);

    for (length = 0; x[length] != '\0'; length++)
        ;

    for (int i = 0, j = length - 1; i < length; i++, j--)
        y[j] = x[i];

    y[length] = '\0';

    int is_palindrome = 1;
    for (int i = 0; i < length; i++)
    {
        if (x[i] != y[i])
        {
            is_palindrome = 0;
            break;
        }
    }
    if (is_palindrome)
        printf("Palindrome\n");
    else
        printf("Not a Palindrome\n");

    return 0;
}
