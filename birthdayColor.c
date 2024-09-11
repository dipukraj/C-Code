#include<stdio.h>
#define ansi_color_red"\x1b[31m"
#define ansi_color_green"\x1b[32m"
#define ansi_color_reset"\x1b[0m"
int main()
{
    char name[50];
    int age;
    printf("enter the person's name:");
    scanf("%s", name);
    printf("enter their age:");
    scanf("%d", &age);
    printf(ansi_color_red "happy birthday, %s!\n" ansi_color_reset, name);
    printf(ansi_color_green "congratulations on turning %d!\n" ansi_color_reset, age);
    return 0;
}