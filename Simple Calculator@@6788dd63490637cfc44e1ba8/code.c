#include <stdio.h>
int main() 
{
    int x,y;
    char op;
    scanf("%d %d %c",&x,&y,&op);
    switch(op)
    {
        case'+':
        {
            printf("%d",x+y);
            break;
        }
        case'-':
        {
            printf("%d",x-y);
            break;
        }
        case'*':
        {
            printf("%d",x*y);
            break;
        }
        case'/':
        {
            printf("%d",x/y);
            break;
        }
        // default:
        // {
        //     printf("Invalid Input");
        //     break;
        // }
    }
    return 0;
}