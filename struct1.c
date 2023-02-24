#include <stdio.h>

struct person {
    char name[20];
} p1;

void main() {
    printf("Enter Name: ");
    scanf("%s", &p1.name);
    printf("Name: %s", p1.name);
}