
#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 0;

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }

    free(result);
    return NULL;
}

int main() {
    // Test Case 1: Normal case
    int nums1[] = {2, 7, 11, 15};
    int size1 = 0;

    int* result1 = twoSum(nums1, 4, 9, &size1);

    printf("Test 1: ");
    if (result1 != NULL) {
        printf("[%d, %d]\n", result1[0], result1[1]);
        free(result1);
    }

    // Test Case 2: Duplicate values
    int nums2[] = {3, 3};
    int size2 = 0;

    int* result2 = twoSum(nums2, 2, 6, &size2);

    printf("Test 2: ");
    if (result2 != NULL) {
        printf("[%d, %d]\n", result2[0], result2[1]);
        free(result2);
    }

    return 0;
}
