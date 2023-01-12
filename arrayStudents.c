#include<stdio.h>

void main() {
    int rollNo[20], marks[20], x = 0;
    while(x < 20) {
        printf("Enter Roll Number of Student %d: ", (x + 1));
        scanf("%d", &rollNo[x]);
        printf("Enter Marks of Student %d: ", (x + 1));
        scanf("%d", &marks[x]);
        x++;
    }

    x = 0;
    printf("Roll No.\tMarks\n");
    while(x < 20) {
        printf("%d\t\t%d\n", rollNo[x], marks[x]);
        x++;
    }
}