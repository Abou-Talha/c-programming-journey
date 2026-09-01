#include<stdio.h>

int main(){

    int marks;

    printf("Enter your marks (out of 100): ");
    scanf("%d", &marks);

    // Simple if-else
    if(marks >= 33){
        printf("Result: PASS\n");
    } else {
        printf("Result: FAIL\n");
    }

    // if-else if-else ladder (Grade system)
    if(marks >= 90){
        printf("Grade: A+ (Outstanding!)\n");
    } else if(marks >= 80){
        printf("Grade: A (Excellent!)\n");
    } else if(marks >= 70){
        printf("Grade: B+ (Very Good)\n");
    } else if(marks >= 60){
        printf("Grade: B (Good)\n");
    } else if(marks >= 50){
        printf("Grade: C (Average)\n");
    } else if(marks >= 33){
        printf("Grade: D (Just Passed)\n");
    } else {
        printf("Grade: F (Failed)\n");
    }

    // Nested if (checking even AND positive)
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    if(num >= 0){
        printf("%d is positive.\n", num);
        if(num % 2 == 0){
            printf("%d is also EVEN.\n", num);
        } else {
            printf("%d is ODD.\n", num);
        }
    } else {
        printf("%d is negative.\n", num);
    }

    return 0;
}
