#include <stdio.h>
int main() 
{
    int x,y;
    char op;
    scanf("%d %d  %c",&x,&y,&op);
    switch(op)
    {
        case'+':
        {
            printf("%d",x+y);
        }
        case'-':
        {
            printf("%d",x-y);
        }
        case'*':
        {
            printf("%d",x*y);
        }
        case'/':
        {
            printf("%d",x/y);
        }
        default
        {
            printf("Invalid Input");
        }
    }
    printf("%s", welcome());
    return 0;
}