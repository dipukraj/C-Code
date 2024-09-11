#include <stdio.h>
int main()
{
    int num1, num2, result;
    printf("enter the first digit:");
    scanf("%d", &num1);
    printf("enter the second digit:");
    scanf("%d", &num2);
    result = num1 - num2;
    printf("result of subtraction: %d\n", result);
    return 0;
}