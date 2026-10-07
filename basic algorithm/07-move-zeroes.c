#include <stdio.h>

void moveZeroes(int nums[], int size) {
    int insertPosition = 0;

    for (int i = 0; i < size; i++) {
        if (nums[i] != 0) {
            nums[insertPosition] = nums[i];
            insertPosition++;
        }
    }

    while (insertPosition < size) {
        nums[insertPosition] = 0;
        insertPosition++;
    }
}

void printArray(int nums[], int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", nums[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("]");
}

int main(void) {
    int nums1[] = {0, 1, 0, 3, 12};
    moveZeroes(nums1, 5);
    printf("Test 1: ");
    printArray(nums1, 5);
    printf(" (Expected: [1, 3, 12, 0, 0])\n");

    int nums2[] = {0};
    moveZeroes(nums2, 1);
    printf("Test 2: ");
    printArray(nums2, 1);
    printf(" (Expected: [0])\n");

    return 0;
}
