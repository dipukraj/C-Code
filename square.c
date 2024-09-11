 #include<stdio.h>
 int main()
 {
    int num, square;
    printf("enter a number: ");
    scanf("%d", &num);
    square = num * num;
    printf("square of %d is %d\n", num, square);
    return 0;
 }