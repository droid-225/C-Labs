#include<stdio.h>

int gcd(int, int);

void main() {
    int x, y;
    printf("Enter First Number: ");
    scanf("%d", &x);
    printf("Enter Second Number: ");
    scanf("%d", &y);

    printf("GCD %d and %d is %d", x, y, gcd(x,y));
}

int gcd(int x, int y) {
    int gcd;
    for(int i = 2; i <= x && i <= y; i++)
    {
        if(x % i == 0 && y % i == 0)
            gcd = i;
    }
    return gcd;
}