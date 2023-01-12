#include<stdio.h>

void exchange(int *, int *);

void main() {
    int *x , *y;
    printf("Enter Value for x: ");
    scanf("%d", &x);
    printf("Enter Value for y: ");
    scanf("%d", &y);
    exchange(&x, &y);
    printf("After Exchange:\n");
    printf("x = %d\n", x);
    printf("y = %d", y);
}

void exchange(int *x, int *y) {
    *y = *x + *y;
    *x = *y - *x;
    *y = *y - *x;
}