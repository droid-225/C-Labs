#include<stdio.h>
#include<string.h>

void main() {
    char string[100], find;
    int i, x = 0;

    printf("Enter A String: ");
    scanf("%s", &string);
    printf("Enter Character to Find: ");
    scanf(" %c", &find);
    printf("%c is Found at Index: ", find);

    for(i = 0; i < 100; i++) {
        if(string[i] == find) {
            printf("%d ", i);
            x++;
        }
    }
    if(x == 0) 
        printf("None\nCharacter is not in String");
}