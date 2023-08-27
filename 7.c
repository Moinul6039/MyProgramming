#include <stdio.h>

// Function to find the nth number in the Fibonacci series
int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        int  a = 0, b = 1, next;
        for (int i = 2; i <= n; i++) {
            next = a + b;
            a = b;
            b = next;
        }
        return next;
    }
}

int main() {
    int n;

    printf("Enter the value of 'n' to find the nth Fibonacci number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
    } else {
        int fib = fibonacci(n);
        printf("The %dth Fibonacci number is %llu\n", n, fib);
    }

    return 0;
}

