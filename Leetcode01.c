#include <cstddef>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i, j;

    for (i = 0; i < numsSize; i++) {
        for (j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                int* res;
                res = (int*)malloc(2 * sizeof(int));
                res[0] = i;
                res[1] = j;
                *returnSize = 2;
                return res;
            }
        }
    }

    *returnSize = 0;
    return NULL;
}