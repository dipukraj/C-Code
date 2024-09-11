#include<stdio.h>
int main()
{
    int a=1;
    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",a);
        }
        a +=2;
        printf("\n");
    }
    return 0;
} 