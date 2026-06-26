#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Not a Prime Number");
    } else {
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                printf("Not a Prime Number");
                return 0;
            }
        }
        printf("Prime Number");
    }

    return 0;
}