//1+2+4+...+2^n
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    for(int i = 0; i<=n ; i++)
    {
       sum = sum + pow(2,i);
    }
    printf("%d ",sum);
    return 0;
}