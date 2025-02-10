#include <stdio.h>
int main() 
{
    int x,i;
    scanf("%d",&x);
    int c=0;
    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            // printf("Not Prime");
            // c=1;
            break;
        }
    }
    if(i==x/2+1)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
    return 0;
}