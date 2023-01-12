#include<stdio.h>
#include<string.h>

void main() {
    char string[20];

    printf("Enter a String: ");
    scanf("%s", &string);
    strupr(string);
    printf("String in Uppercase: %s", string);
}