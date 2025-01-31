#include <stdio.h>
int main() 
{
    int temp;
    scanf("%d",&temp);
    if(temp<=0)
    {
        printf("Freezing");
    }
    else if(temp>0)
    {
        printf("Abobe Freezing");
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}