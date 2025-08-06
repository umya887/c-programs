#include <stdio.h>

// Function to calculate factorial iteratively
long long factorial(int n) {
    long long fact = 1;
    if (n < 0) {
        return -1; // Indicate error for negative numbers
    } else if (n == 0) {
        return 1;
    } else {
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        return fact;
    }
}

int main() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    long long result = factorial(num);

    if (result == -1) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %lld\n", num, result);
    }

    return 0;
}