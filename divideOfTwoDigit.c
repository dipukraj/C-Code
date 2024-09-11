#include<stdio.h>
int main()
{
    int num1, num2, result;
    printf("enter of first digit:");
    scanf("%d", &num1);
    printf("enter of second digit:");
    scanf("%d", &num2);
    result = num1 / num2;
    printf("result of divide: %d\n", result);
    return 0;
}