#include<stdio.h>

int main(){

    // ===== DECLARING AND INITIALIZING ARRAYS =====
    int marks[5] = {90, 85, 78, 92, 88};

    printf("My marks:\n");
    for(int i = 0; i < 5; i++){
        printf("Subject %d: %d\n", i + 1, marks[i]);
    }

    // ===== TAKING ARRAY INPUT FROM USER =====
    int nums[5];
    printf("\nEnter 5 numbers:\n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &nums[i]);
    }

    // ===== FINDING LARGEST NUMBER =====
    int largest = nums[0];
    for(int i = 1; i < 5; i++){
        if(nums[i] > largest){
            largest = nums[i];
        }
    }
    printf("\nLargest number: %d\n", largest);

    // ===== SUM AND AVERAGE =====
    int sum = 0;
    for(int i = 0; i < 5; i++){
        sum = sum + nums[i];
    }
    float avg = (float)sum / 5;  // (float) converts sum to float
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", avg);

    // ===== REVERSING AN ARRAY =====
    int arr[5] = {1, 2, 3, 4, 5};
    printf("\nOriginal: ");
    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }

    // Swap first with last, second with second-last, etc.
    for(int i = 0; i < 5/2; i++){
        int temp = arr[i];
        arr[i] = arr[4 - i];
        arr[4 - i] = temp;
    }

    printf("\nReversed: ");
    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}