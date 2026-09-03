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

    return 0;
}