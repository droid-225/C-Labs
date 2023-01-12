#include<stdio.h>

int prime(int);

void main() {
    int x;
    printf("Enter a Number: ");
    scanf("%d", &x);
    printf("%d", prime(x));
}

int prime(int x) {
    int n = 2;
    while(n < 10) {
        if(x % n == 0 && x != n)
            return 0;
        n++;
    }
    return 1; 
}

