#include <stdio.h>
int main() 
{
    char name[100],fav_hobby[100];
    int age;
    scanf("%s %d %s\n",&name,&age,&fav_hobby);
    printf("Name: %s\nAge: %d\nHobby: %s",name,age,fav_hobby);
    return 0;
}