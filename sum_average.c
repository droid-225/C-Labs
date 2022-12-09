#include <stdio.h>
#include <conio.h>

void main() {

    int choice;
    float ave;

    printf("Enter '1' for Sum\n");
    printf("Enter '2' for Average\n");
    scanf("%d", &choice);

    while (choice > 2 || choice < 1) {
        printf("Your Input is Incorrect!\n");
        printf("Enter '1' for Sum\n");
        printf("Enter '2' for Average\n");
        scanf("%d", &choice);
    }

    if(choice == 1) {
        int numbers, number;
        int sum = 0;
        printf("How many numbers do you want to find the sum of? ");
        scanf("%d", &numbers);
        for (int i = 1; i <= numbers; i++)
        {
            printf("Enter number %d: ", i);
            scanf("%d", &number);
            sum += number;
        }
        printf("Sum = %d", sum);
    }
    else if(choice == 2) {
        int numbers, number;
        int sum = 0;
        printf("How many numbers do you want to find the average of? ");
        scanf("%d", &numbers);
        for (int i = 1; i <= numbers; i++)
        {
            printf("Enter number %d: ", i);
            scanf("%d", &number);
            sum += number;
        }
        printf("Sum = %d\n", sum);
        printf("Numbers = %d\n", numbers);
        ave = sum / (float)numbers; 
        printf("Avearge = %0.2f", ave);
    }

}