#include <stdio.h>

int main()
{
    int i = 5;

    printf("i = %d\n", i);
    printf("i++ = %d\n", i++);  // print first, then increase
    printf("Now i = %d\n", i);

    int j = 5;
    printf("j = %d\n", j);
    printf("++j = %d\n", ++j);  // increase first, then print
    printf("Now j = %d\n", j);

    return 0;
}