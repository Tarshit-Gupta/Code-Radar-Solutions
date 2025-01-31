#include <stdio.h>
int main() 
{
    float x,y;
    char op;
    scanf("%f %f  %c",&x,&y,&op);
    switch(op)
    {
        case'+':
        {
            printf("%f",x+y);
            break;
        }
        case'-':
        {
            printf("%f",x-y);
            break;
        }
        case'*':
        {
            printf("%f",x*y);
            break;
        }
        case'/':
        {
            printf("%f",x/y);
            break;
        }
        default
        {
            printf("Invalid Input");
            break;
        }
    }
    return 0;
}