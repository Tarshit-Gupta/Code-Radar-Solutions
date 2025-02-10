#include <stdio.h>
int main() 
{
    int sum,N,i;
    scanf("%d",&N);
    for (i=1;i<=N;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}