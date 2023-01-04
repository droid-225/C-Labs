#include<stdio.h>

void swap(int *, int *);

void main() {
    int x = 1;
    int y = 2;

    swap(&x, &y);
    printf("x = %d\n y = %d", x, y);
}

void swap (int *x, int *y) {
    *y = *x + *y;
    *x = *y - *x;
    *y = *y - *x; 
}