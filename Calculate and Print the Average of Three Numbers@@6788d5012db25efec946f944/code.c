#include<stdio.h>
int main() 
{
    int a,b,c;
    float x;
    scanf("%d %d %d",&a,&b,&c);
    // x=(a+b+c)/3;
    x=(a/3)+(b/3)+(c/3);
    printf("Average: %.2f",x);
    return 0;
}