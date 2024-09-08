/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int left = 0;
    int right = numsSize - 1;
    int* result = (int*)malloc(numsSize * sizeof(int));
    int index = numsSize - 1;

    while (left <= right) {
        int num1 = nums[left] * nums[left];
        int num2 = nums[right] * nums[right];
        if (num1 > num2) {
            result[index--] = num1;
            left++;
        }
        else {
            result[index--] = num2;
            right--;
        }
    }

    *returnSize = numsSize;
    return result;
}