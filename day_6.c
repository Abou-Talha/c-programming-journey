#include<stdio.h>

int main(){

    // ===== FOR LOOP =====
    // Print 1 to 5
    printf("FOR LOOP: ");
    for(int i = 1; i <= 5; i++){
        printf("%d ", i);
    }
    printf("\n");

    // ===== WHILE LOOP =====
    // Print table of 2
    printf("\nWHILE LOOP (Table of 2):\n");
    int n = 1;
    while(n <= 10){
        printf("2 x %d = %d\n", n, 2 * n);
        n++;
    }

    // ===== DO-WHILE LOOP =====
    // Runs AT LEAST once, even if condition is false
    printf("\nDO-WHILE LOOP: ");
    int x = 10;
    do {
        printf("%d ", x);
        x++;
    } while(x <= 5);  // condition is FALSE, but it runs once!
    printf("\n(Notice: it printed 10 even though condition was false)\n");

    // ===== PRACTICAL EXAMPLE: Sum of first N natural numbers =====
    int num, sum = 0;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        sum = sum + i;
    }
    printf("Sum of first %d natural numbers = %d\n", num, sum);

    return 0;
}