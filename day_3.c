#include<stdio.h>

int main(){

    int age;
    float percentage;
    char grade;

    // Taking input from user
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your percentage: ");
    scanf("%f", &percentage);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    // Displaying the input
    printf("\n--- Your Details ---\n");
    printf("Age: %d\n", age);
    printf("Percentage: %.1f\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}