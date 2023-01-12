#include<stdio.h>
#include<string.h>

void main() {
    char string[100], del;
    int i, j, x = 0;

    printf("Enter A String: ");
    scanf("%s", &string);
    printf("Enter Character to Delete: ");
    scanf(" %c", &del);
 
    for(i = 0; i < 100; i++) {
        if(string[i] == del) {
            for(j = i; j < 100; j++) {
                string[j] = string[j + 1];
            }
            x++;
            i--;
        }
    }
    if(x == 0) { 
        printf("%c is not in string", del);
    }
    else
        printf("New String: %s", string);
}