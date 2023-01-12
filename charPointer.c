#include<stdio.h>

void main() {
    char *str[20] = {"Hello"};
    int i;
    printf("Address of String: %p\n", *str);
    printf("Characters of String:\n");
    for(i = 0; i < 20; i++) {
        printf("%c\n", *str[i]);
    }
}