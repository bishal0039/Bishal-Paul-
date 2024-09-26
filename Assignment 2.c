#include <stdio.h>
int Largestno(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

int main() {
    int n1, n2, n3, lg;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    
    lg = Largestno(n1, n2, n3);

    
    printf("The largest number is: %d\n", lg);

    return 0;
}
