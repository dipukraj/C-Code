#include<stdio.h>
int main()
{
    printf("enter a date (yyyy-mm-dd): ");
    int year, month, day;
    scanf("%d-%d-%d, &year, %month, %day");
    int week_number = (day + 2.83 + (year - 1988) * 5 + ((year - 1988) / 4)) / 7;
    printf("week number: %d\n", week_number);
    return 0;
}