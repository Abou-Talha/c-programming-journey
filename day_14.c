#include <stdio.h>

// Function prototype
void printArray(int arr[], int size);

int main()
{
    int marks[] = {85, 78, 92, 67, 90};
    int size = 5;

    printf("Marks: ");
    printArray(marks, size);

    return 0;
}

// Function that receives array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}