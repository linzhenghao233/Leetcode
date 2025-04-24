/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findIndices(int* nums, int numsSize, int indexDifference, int valueDifference, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));
    result[0] = result[1] = -1;
    *returnSize = 2;

    for (int j = 0; j < numsSize; j++) {
        for (int i = j + indexDifference; i < numsSize; i++) {
            if (abs(nums[i] - nums[j]) >= valueDifference) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }

    return result;
}