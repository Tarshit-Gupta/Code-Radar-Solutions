#include <stdio.h>
int main() 
{
    char color;
    scanf("%d",&color);
    if(color=='R')
    {
        printf("Stop");
    }
    else if(color=='G')
    {
        printf("Go");
    }
    else if(color=='Y')
    {
        printf("Slow Down");
    }
    else
    {
        printf("Invalid input");
    }
    return 0;
}