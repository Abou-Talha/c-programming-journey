#include<stdio.h>

int main(){

    int day;
    printf("Enter day number (1-7): ");
    scanf("%d", &day);

    switch(day){
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day number!\n");
    }

    // Simple calculator using switch
    char op;
    int a, b;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch(op){
        case '+':
            printf("%d + %d = %d\n", a, b, a + b);
            break;
        case '-':
            printf("%d - %d = %d\n", a, b, a - b);
            break;
        case '*':
            printf("%d * %d = %d\n", a, b, a * b);
            break;
        case '/':
            printf("%d / %d = %d\n", a, b, a / b);
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}