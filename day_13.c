#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;  // ptr points to first element

    printf("Using array index:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    printf("\nUsing pointer:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("*(ptr + %d) = %d\n", i, *(ptr + i));
    }

    return 0;
}