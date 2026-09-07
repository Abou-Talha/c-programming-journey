#include <stdio.h>

int main()
{
    int i = 8;
    int *j;       // j is a pointer to integer
    j = &i;       // j stores the ADDRESS of i

    printf("Address of i = %p\n", &i);
    printf("Address of i = %p\n", j);
    printf("Address of j = %p\n", &j);
    printf("Value of i = %d\n", i);
    printf("Value of i = %d\n", *(&i));
    printf("Value of i = %d\n", *j);

    return 0;
}