#include <stdio.h>

void twoSum(int nums[], int size, int target, int result[2]) {
    result[0] = -1;
    result[1] = -1;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return;
            }
        }
    }
}

int main(void) {
    int nums1[] = {2, 7, 11, 15};
    int result1[2];
    twoSum(nums1, 4, 9, result1);
    printf("Test 1: [%d, %d] (Expected: [0, 1])\n", result1[0], result1[1]);

    int nums2[] = {3, 3};
    int result2[2];
    twoSum(nums2, 2, 6, result2);
    printf("Test 2: [%d, %d] (Expected: [0, 1])\n", result2[0], result2[1]);

    return 0;
}
