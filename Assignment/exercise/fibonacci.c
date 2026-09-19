#include <stdio.h>

void printFibonacci(int n) {
    long long first = 0, second = 1, next;

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return;
    }

    printf("Fibonacci Series (%d terms):\n", n);

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%lld", first);
            continue;
        }
        if (i == 2) {
            printf(", %lld", second);
            continue;
        }
        next = first + second;
        first = second;
        second = next;
        printf(", %lld", next);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printFibonacci(n);

    long long a = 0, b = 1, c;
    if (n >= 1) {
        if (n == 1) {
            printf("The %dth Fibonacci number is: %lld\n", n, a);
        } else {
            for (int i = 3; i <= n; i++) {
                c = a + b;
                a = b;
                b = c;
            }
            printf("The %dth Fibonacci number is: %lld\n", n, b);
        }
    }

    return 0;
}