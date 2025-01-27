/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    int left = 0;
    int right = numsSize - 1;

    while (left < right) {
        while (!(nums[left] % 2) && left < right)
            left++;
        while (nums[right] % 2 && right > left)
            right--;

        int temp = nums[left];
        nums[left] = nums[right];
        nums[right] = temp;
    }

    *returnSize = numsSize;
    return nums;
}