#include<stdio.h>

void main() {
    int fac = 1, x, n;
    printf("Enter Value for x: ");
    scanf("%d", &x);
    n = x;
    while(x > 0) {
        fac *= x;
        x--;
    }
    
    printf("%d! = %d", n, fac);
}