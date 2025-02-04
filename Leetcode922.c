/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParityII(int* nums, int numsSize, int* returnSize) {
    int even = 0;
    int odd = 1;
    int* result = (int*)malloc(numsSize * sizeof(int));
    *returnSize = numsSize;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 2) {
            result[odd] = nums[i];
            odd += 2;
        }
        else {
            result[even] = nums[i];
            even += 2;
        }
    }

    return result;
}