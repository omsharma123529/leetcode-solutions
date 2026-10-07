#include <stdio.h>

int binarySearch(int nums[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int middle = left + (right - left) / 2;

        if (nums[middle] == target) {
            return middle;
        } else if (nums[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    return -1;
}

int main(void) {
    int nums1[] = {-1, 0, 3, 5, 9, 12};
    printf("Test 1: %d (Expected: 4)\n", binarySearch(nums1, 6, 9));

    int nums2[] = {5};
    printf("Test 2: %d (Expected: -1)\n", binarySearch(nums2, 1, 2));

    return 0;
}
