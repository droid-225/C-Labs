#include<stdio.h>

void main() {
    char s1[100], s2[100], s3[100];
    int i = 0;
    int j = 0;

    printf("Enter First string: ");
    scanf("%s",&s1);
    printf("Enter Second String: ");
    //scanf("\n");
    scanf("%s",&s2);
    printf("%s\n", s1);
    printf("%s\n", s2);

    //s1[(sizeof(s1)/sizeof(char))] = '\0';
    //s2[(sizeof(s2)/sizeof(char))] = '\0';

    while(s1[i] != '\0') {
        s3[j] = s1[i];
        i++;
        j++;
    }

    i = 0;
    while(s2[i] != '\0') {
        s3[j] = s2[i];
        i++;
        j++;
    }
    
    printf("New String: %s", s3);
}