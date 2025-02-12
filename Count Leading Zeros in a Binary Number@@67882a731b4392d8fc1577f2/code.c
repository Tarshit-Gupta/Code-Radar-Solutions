#include<stdio.h>
int main()
{
    unsigned x;
    int count=0;
    scanf("%u",&x);
    while(x!=0)
    {
        count++;
        x>>=1;
    }
    printf("%d",32-count);
    return 0;
}