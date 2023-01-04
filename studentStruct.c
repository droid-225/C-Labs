#include<stdio.h>

struct Student {
    int rollno, marks1, marks2, marks3;
};

void main() {
    struct Student student1;
    struct Student student2;
    struct Student student3;
    int total;
    
    printf("Enter Roll Number of Student 1: ");
    scanf("%d", &student1.rollno);
    printf("Enter Marks for First Subject: ");
    scanf("%d", &student1.marks1);
    printf("Enter Marks for Second Subject: ");
    scanf("%d", &student1.marks2);
    printf("Enter Marks for Third Subject: ");
    scanf("%d", &student1.marks3);

    printf("Enter Roll Number of Student 2: ");
    scanf("%d", &student2.rollno);
    printf("Enter Marks for First Subject: ");
    scanf("%d", &student2.marks1);
    printf("Enter Marks for Second Subject: ");
    scanf("%d", &student2.marks2);
    printf("Enter Marks for Third Subject: ");
    scanf("%d", &student2.marks3);
    
    printf("Enter Roll Number of Student 3: ");
    scanf("%d", &student3.rollno);
    printf("Enter Marks for First Subject: ");
    scanf("%d", &student3.marks1);
    printf("Enter Marks for Second Subject: ");
    scanf("%d", &student3.marks2);
    printf("Enter Marks for Third Subject: ");
    scanf("%d", &student3.marks3);
    
    total = student1.marks1 + student1.marks2 + student1.marks3;
    printf("Total Marks Obtained by Student 1: %d\n", total);
    total = student2.marks1 + student2.marks2 + student2.marks3;
    printf("Total Marks Obtained by Student 2: %d\n", total);
    total = student1.marks3 + student3.marks2 + student3.marks3;
    printf("Total Marks Obtained by Student 3: %d", total);
}