#include<stdio.h>
int main()
{
    int num, cube;
    printf("enter a number:");
    scanf("%d", &num);
    cube = num * num * num;
    printf("cube of %d is %d\n", num, cube);
    return 0;
}


