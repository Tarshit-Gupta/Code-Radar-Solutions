#include <stdio.h>
int main() 
{
    int x;
    scanf("%d",&x);
    // int c=0;
    for(int i=2;i<=x;i++)
    {
        if(x%i==0)
        {
            printf("Not Prime");
            // c=1;
            break;
        }
    }
    // if(c==1)
    // {
    //     printf("Not Prime");
    // }
    else
    {
        printf("Prime");
    }
    return 0;
}