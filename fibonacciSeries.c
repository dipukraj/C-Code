#include <stdio.h>

int fibo(int n) {
    if(n <= 0) return 0;  // Fibo(0) = 0
    if(n == 1) return 1;  // Fibo(1) = 1
    return fibo(n - 1) + fibo(n - 2);  // Recursive call
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Fibonacci number is: %d\n", fibo(n));
    return 0;
}