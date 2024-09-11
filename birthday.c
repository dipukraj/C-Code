#include<stdio.h>
int main()
{
    char name[50];
    int age;
    printf("enter the person's name:");
    scanf("%s", name);
    printf("enter their age:");
    scanf("%d", &age);
    printf("happy birthday, %s!\n", name);
    printf("congratulations on turning %d!\n", age);
    return 0;
}