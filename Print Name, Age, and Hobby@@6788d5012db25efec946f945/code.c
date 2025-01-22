#include <stdio.h>
int main() 
{
    char name[100],fav_hobby[100];
    int age;
    scanf("%c %d",&name,&age);
    printf("\n");
    scanf("\n%c",&fav_hobby);
    printf("Name: %c\nAge: %d\nHobby: %c",name,age,fav_hobby);
    return 0;
}