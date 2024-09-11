#include<stdio.h>
int main()
{
    int year;
    printf("enter a year to check\n");
    scanf("%d",&year);
    if(year %4==0&&year %100 !=0)
    {
        printf("leap year");
    }
    else
    {
        printf("not leap year");
    }
    return 0;
} 