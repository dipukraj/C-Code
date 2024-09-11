#include<stdio.h>
int main()
{
    int i;
    char* red = "\033[0;31m";
    char*reset = "\033[0m";
    for(i=0;i<10;i++)
    {
        printf("%s i love you pari %s\n", red, reset);
    }
    return 0;
}