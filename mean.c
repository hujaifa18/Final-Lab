// mean of an array
#include <stdio.h>
int main()
{
    int num[100], N, i, sum = 0;
    printf("Enter the value of N = ");
    scanf("%d", &N);

    printf("Enter %d numbers = ", N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num[i]);
        sum += num[i];
    }
    float mean;
    mean = (float)sum / N;
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (mean < num[i])
        {
            count++;
        }
    }
    printf("Mean of these %d numbers is = %.2f\n", N, mean);
    printf("Number of greater numbers is = %d\n", count);
    return 0;
}