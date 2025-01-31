#include <stdio.h>
int main() 
{
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        int c=0;
        if(x%i==0)
        {
            c==1;
            break;
        }
    }
    if(c==1)
    {
        printf("Not Prime");
    }
    else
    {
        printf("Prime");
    }
    return 0;
}