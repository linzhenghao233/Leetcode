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
    int** result = (int**)malloc(numsSize * 4 * sizeof(int*));
    *returnColumnSizes = (int*)malloc(numsSize * 4 * sizeof(int));

    while (head < tail) {
        left = head + 1;
        right = tail - 1;
        while (left < tail && right > head && left < right) {
            int total = nums[head] + nums[left] + nums[right] + nums[tail];
            if (total < target) {
                while (left + 1 < right && nums[left] == nums[left + 1])
                    left++;
                left++;
            }
            else if (total > target) {
                while (right - 1 < right && nums[right] == nums[right - 1])
                    right--;
                right--;
            }
            else {
                result[row] = (int*)malloc(4 * sizeof(int));
                result[row][0] = nums[head];
                result[row][1] = nums[left];
                result[row][2] = nums[right];
                result[row][3] = nums[tail];
                (*returnColumnSizes)[row] = 4;
                row++;
                left++;
                right--;
                while (left < right && nums[left] == nums[left - 1])
                    left++;
                while (left < right && nums[right] == nums[right + 1])
                    right--;
            }
        }
        head++;
        tail--;
        while (head < tail && nums[head] == nums[head - 1])
            head++;
        while (head < tail && nums[tail] == nums[tail + 1])
            tail--;
    }
    *returnSize = row;

    return result;
}