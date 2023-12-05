/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int** fourSum(int* nums, int numsSize, int target, int* returnSize, int** returnColumnSizes) {
    qsort(nums, numsSize, sizeof(int), cmp);
    int head = 0, tail = numsSize - 1, left, right, row = 0;
    int** result = (int**)malloc(51 * sizeof(int*));

    while (head < tail) {
        left = head + 1;
        right = tail - 1;
        while (left < right) {
            int total = nums[head] + nums[left] + nums[right] + nums[tail];
            if (total < target)
                left++;
            else if (total > target)
                right--;
            else {
                result[row] = (int*)malloc(4 * sizeof(int));
                result[row][0] = nums[head];
                result[row][1] = nums[left];
                result[row][2] = nums[right];
                result[row][3] = nums[tail];
                returnColumnSizes[row][0] = 4;
                row++;
                left++;
                right++;
            }
        }
        head++;
        tail++;
    }
    *returnSize = row;

    return result;
}