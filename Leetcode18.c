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
    int left, right, row = 0, i, j;
    int** result = (int**)malloc(numsSize * 4 * sizeof(int*));
    *returnColumnSizes = (int*)malloc(numsSize * 4 * sizeof(int));

    if (nums[0] > 0 && nums[0] > target) {
        *returnSize = 0;
        *returnColumnSizes = NULL;
        return NULL;
    }
    if (nums[numsSize - 1] < 0 && nums[numsSize - 1] < target) {
        *returnSize = 0;
        *returnColumnSizes = NULL;
        return NULL;
    }

    for (i = 0; i < numsSize - 3; i++) {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        for (j = i + 1; j < numsSize - 2; j++) {
            if (j > i + 1 && nums[j] == nums[j - 1])
                continue;
            left = j + 1;
            right = numsSize - 1;

            while (left < right) {
                long long total = (long long)nums[i] + nums[j] + nums[left] + nums[right];
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
                    result[row][0] = nums[i];
                    result[row][1] = nums[j];
                    result[row][2] = nums[left];
                    result[row][3] = nums[right];
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
        }
    }
    *returnSize = row;

    return result;
}