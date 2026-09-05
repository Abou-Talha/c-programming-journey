#include<stdio.h>

int main(){

    // break: EXIT the loop completely
    printf("BREAK: Stop at 5\n");
    for(int i = 1; i <= 10; i++){
        if(i == 5){
            printf("Breaking at %d!\n", i);
            break;
        }
        printf("%d ", i);
    }
    printf("\n\n");

    // continue: SKIP this iteration
    printf("CONTINUE: Skip 5\n");
    for(int i = 1; i <= 10; i++){
        if(i == 5){
            continue;
        }
        printf("%d ", i);
    }
    printf("\n\n");

    // Skip even numbers
    printf("ODD NUMBERS ONLY:\n");
    for(int i = 1; i <= 20; i++){
        if(i % 2 == 0){
            continue;
        }
        printf("%d ", i);
    }
    printf("\n\n");

    // Find first number divisible by 7
    printf("First number divisible by 7:\n");
    for(int i = 1; i <= 100; i++){
        if(i % 7 == 0){
            printf("Found: %d\n", i);
            break;
        }
    }

    // while loop with break
    int num;
    printf("Enter numbers (0 to stop):\n");
    while(1){
        printf("> ");
        scanf("%d", &num);
        if(num == 0){
            printf("Stopped!\n");
            break;
        }
        printf("You entered: %d\n", num);
    }

    return 0;
}