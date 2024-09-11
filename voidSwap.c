#include<stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
        *b = temp;
}
int main() {
    int a;
    printf("Enter 1st numbers: ");
    scanf("%d", &a);
int b;
 printf("Enter second numbers: ");
    scanf("%d", &b);
    swap(&a, &b);
    printf(" %d\n,%d\n", a, b);
    return 0;
}