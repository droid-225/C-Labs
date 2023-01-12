#include<stdio.h>
#include<string.h>

void main() {
    char string[100], c1, c2;
    int i, x = 0;

    printf("Enter A String: ");
    scanf("%s", &string);
    printf("Enter Character to Replace: ");
    scanf(" %c", &c1);
    printf("Enter new Character: ");
    scanf(" %c", &c2);
 
    for(i = 0; i < 100; i++) {
        if(string[i] == c1) {
            string[i] = c2;
            x++;
        }
    }
    if(x == 0) 
        printf("%c is not in string", c1);
    else
        printf("New String: %s", string);
}