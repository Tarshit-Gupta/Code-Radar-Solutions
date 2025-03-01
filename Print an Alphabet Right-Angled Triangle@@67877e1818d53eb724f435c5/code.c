#include<stdio.h>
int main()
{
    int i,j,n;
    char ch;
    scanf("%d ",&n);
   //  scanf("%c",&ch);
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%c ",j+65);
        }
        printf("\n");
    }
}