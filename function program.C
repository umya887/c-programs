#include <stdio.h>
int add(int a, int b);

int main() {
    int num1 = 5, num2 = 7;
    int sum = add(num1, num2);  
    printf("Sum: %d\n", sum);
    return 0;
}


int add(int a, int b) {
    return a + b;
}
