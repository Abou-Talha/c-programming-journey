#include <stdio.h>

// Function prototype
int factorial(int n);

int main()
{
    int num = 5;
    int result = factorial(num);
    printf("Factorial of %d is %d\n", num, result);
    return 0;
}

// Function definition (recursive)
int factorial(int n)
{
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1)
    {
        return 1;
    }
    // Recursive case: n! = n * (n-1)!
    else
    {
        return n * factorial(n - 1);
    }
}