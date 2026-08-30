#include <stdio.h>
int main (){
int a = 15, b = 4;
// Arithmetic Operators
printf("a = %d , b = %d\n\n",a,b);
printf("Addition (a+b) = %d\n",a+b);
printf("Subtraction (a-b) = %d\n",a-b);
printf("Multiplicatiion (a*b) = %d\n",a * b);
printf("Devision (a/b) = %d\n",a/b);
printf("Remainder (a%%b) = %d\n",a%b);

// Relational Operators (gives 1 for true, 0 for false)
    printf("Is a == b? %d\n", a == b);
    printf("Is a > b? %d\n", a > b);
    printf("Is a < b? %d\n", a < b);
    printf("Is a != b? %d\n\n", a != b);


    // Logical Operators
    int x = 5, y = 10;
    printf("x = %d, y = %d\n", x, y);
    printf("(x > 3 && y > 5) = %d\n", x > 3 && y > 5);
    printf("(x > 10 || y > 5) = %d\n", x > 10 || y > 5);
    printf("!(x > 5) = %d\n", !(x > 5));

    return 0;
}