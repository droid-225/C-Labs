#include<stdio.h>

int sum();

void main() {
    printf("Sum = %d", sum());
}

int sum() {
    int sum, n, x;
    printf("Enter Value of n: ");
    scanf("%d", &n);
    while(n != 0) {
        sum += n;
        n--;
    }
    return sum;
}