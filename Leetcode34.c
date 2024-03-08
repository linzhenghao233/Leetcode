/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int left = 0;
    int right = numsSize - 1;
    int* result = (int*)malloc(sizeof(int) * 2);
    result[0] = result[1] = -1;
    *returnSize = 2;

    if (numsSize == 1 && nums[0] == target) {
        result[0] = result[1] = 0;
        return result;
    }

    while (left <= right) {
        int middle = left + (right - left) / 2;

        if (nums[middle] == target) {
            result[0] = middle;
            right = middle - 1;
        }
        else if (nums[middle] > target)
            right = middle - 1;
        else
            left = middle + 1;
    }

    left = 0;
    right = numsSize - 1;
    while (left <= right) {
        int middle = left + (right - left) / 2;

        if (nums[middle] == target) {
            result[1] = middle;
            left = middle + 1;
        }
        else if (nums[middle] > target)
            right = middle - 1;
        else
            left = middle + 1;
    }

    return result;
}