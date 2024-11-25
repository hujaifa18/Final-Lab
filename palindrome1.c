// palindrome with builtin function
#include <stdio.h>
#include <string.h>
int main()
{
    char word1[10], word2[10];
    gets(word1);
    strcpy(word2, word1);
    strrev(word1);
    if (strcmp(word1, word2) == 0)
    {
        printf("It's a Palindrome\n");
    }
    else
    {
        printf("It's not a Palindrome\n");
    }
    return 0;
}