#include<stdio.h>
int main()
{
    int num,i=1,bin=0,a;
    printf("enter a number :-");
    scanf("%d",&num);
    a=num;
    while(a>0)
    {
        bin = bin + (a%2)*i;
        a = a/2;
        i = i*10;
    }
    printf("binary representation of %dnumber is %d",num,bin);
    return 0;
}