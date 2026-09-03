#include<stdio.h>

// ===== 1. FUNCTION DECLARATION (Prototype) =====
// Tells the compiler: "these functions exist, I'll define them later"
int add(int a, int b);
void checkEvenOdd(int n);
void welcome();

// ===== 2. FUNCTION CALLS (inside main) =====
int main(){

    welcome();

    int sum = add(10, 20);
    printf("Sum = %d\n", sum);

    sum = add(100, 200);
    printf("Sum = %d\n", sum);

    checkEvenOdd(7);
    checkEvenOdd(4);

    return 0;
}

// ===== 3. FUNCTION DEFINITIONS (actual logic) =====
int add(int a, int b){
    int result = a + b;
    return result;
}

void checkEvenOdd(int n){
    if(n % 2 == 0){
        printf("%d is EVEN\n", n);
    } else {
        printf("%d is ODD\n", n);
    }
}

void welcome(){
    printf("Welcome to my C program!\n");
}
