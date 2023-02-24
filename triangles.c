#include <stdio.h>

void main() {
    int h, i, j;
    printf("Enter Height of Triangle: ");
    scanf("%d", &h);

    /*
    for(i = 1; i <= h; i++) {
        for(j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }
    */
    /*
    for(i = 1; i <= h; i++) {
        for(j = h - i; j >= 0; j--)
            printf("*");
        printf("\n");
    }
    */
    for(i = 1; i <= h; i++) {
        for(j = h - i; j > 0; j--)
            printf(" ");
        for(j = 0; j < i; j++)
            printf("* ");
        printf("\n");
    }

}