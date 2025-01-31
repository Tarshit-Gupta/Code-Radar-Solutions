#include <stdio.h>
int main() 
{
    float x,y;
    char ch;
    scanf("%f%f",&x,&y);
    scanf(" %c", &ch);
    switch(ch)
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