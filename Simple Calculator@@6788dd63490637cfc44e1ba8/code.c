#include <stdio.h>
int main() 
{
    int x,y;
    char ch;
    scanf("%d%d",&a,&b);
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