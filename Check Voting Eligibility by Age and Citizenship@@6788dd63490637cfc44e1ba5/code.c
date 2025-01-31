#include <stdio.h>
int main() 
{
    int age,cit;
    scanf("%d %d",&age,cit);
    if(cit==1 && age>=18)
    {
        printf("Eligible");
    }
    else
    {
        printf("Not Eligible");
    }
    return 0;
}