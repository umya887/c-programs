#include <stdio.h>

int main() {
    int i, start, end;

    printf("Enter the start number: ");
    scanf("%d", &start);

    printf("Enter the end number: ");
    scanf("%d", &end);

    for (i = start; i <= end; i++) {
        if (i % 2 == 0) {
            printf("%d is Even\n", i);
        } else {
            printf("%d is Odd\n", i);
        }
    }

    return 0;
}
