#include<stdio.h>
#include<string.h>

void main() {
    char string[20], rev[20];
    int i, x;

    printf("Enter a String: ");
    scanf("%s", &string);
    printf("Enter Length of String: ");
    scanf("%d", &x);
    x--;
    for(i = 0; i <= x; i++) {
        rev[i] = string[x - i];
    }
    printf("String in Reverse: %s", rev);
}