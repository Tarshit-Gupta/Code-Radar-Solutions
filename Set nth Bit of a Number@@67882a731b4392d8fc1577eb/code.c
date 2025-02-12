#include<stdio.h>
int main()
{
    int x,a,b;
    scanf("%d %d",&a,&b);
    x=(1<<b)|a;
    printf("%d",x);
    return 0;
}