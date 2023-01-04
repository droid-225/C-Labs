#include<stdio.h>
#include<string.h>

void main() {
    char str[100] = "wow";
    char rev[100];
    strcpy(rev,str);
    strrev(rev);

    if(strcmp(str,rev) == 0) 
        printf("The string is a palindrome");
    else
        printf("The string is not a palindrome");
}