#include<stdio.h>
int main()
{
    int marks;
    printf("enter number (0-100):");
    scanf("%d",&marks);
    // if(marks >=0 && marks <=24){
        // printf("FAIL \n");
        // }
        // else if (marks > 24 && marks <=100){
            // printf("pass \n");
            // }
            marks <= 24 ? printf("FAIL \n"):printf("pass \n");
            return 0;
}