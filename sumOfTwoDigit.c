#include<stdio.h>
int main()
{
    int num1, num2, sum;
    printf("enter the first digit:");
    scanf("%d",&num1);
    printf("enter the second digit:");
    scanf("%d",&num2);
    sum = num1 + num2;
    printf("the sum of %d and %d is: %d\n", num1, num2, sum);
    return 0; 
} 