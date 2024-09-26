#include <stdio.h>
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    printf("Enter a no: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("enter no greater than 0\n");
    } else {
        printf("Factorial of %d is: %d\n", num, factorial(num));
    }

    return 0;
}
