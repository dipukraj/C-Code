#include<stdio.h>
int isRightAngleTriangle(int a, int b, int c)
{
    if(a>c)
    {
        int temp = a;
        a = c;
        c = temp;
    }
    if(b>c)
    {
        int temp = b;
        b = c;
        c = temp;
    }
    if(c*c==a*a+b*b)
    {
        return 0;
    }
}
int main()
{
    int side1, side2, side3;
    printf("enter three sides of the triangle:");
    scanf("%d %d %d", &side1, &side2, &side3);
    if(isRightAngleTriangle(side1, side2, side3))
    {
        printf("the given sides form a right-angled triangle.\n");
    }
    else
    {
        printf("the given sides do not form a right-angled triangle.\n");
    }
    return 0;
}