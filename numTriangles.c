#include <stdio.h>

void main() {
    int h, i, j;
    printf("Enter Height of Trinagle: ");
    scanf("%d", &h);

    /*
    for(i = 1; i <= h; i++) {
        for(j = 1; j <= i; j++)
            printf("%d", j);
        printf("\n");
    }
    */

   /*
   for(i = 0; i < h; i++) {
        for(j = 1; j <= h - i; j++)
            printf("%d", j);
        printf("\n");
    }
    */

    /*
    for(i = 0; i < h; i++) {
        for(j = 1; j <= h - i; j++)
            printf("%d", h - i);
        printf("\n");
    }
    */

    for(i = 1; i <= h; i++) {
        for(j = 1; j <= i; j++)
            printf("%d", i);
        printf("\n");
    }
}