#include <stdio.h>
int main() 
{
    int x;
    scanf("%d",&x);
    if(x^0<0 || x^0>0)
    {
        printf("Set");
    }
    else
    {
        printf("Not Set");
    }
    return 0;
}