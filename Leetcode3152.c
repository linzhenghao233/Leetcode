/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* isArraySpecial(int* nums, int numsSize, int** queries, int queriesSize, int* queriesColSize, int* returnSize) {
    char* result = (char*)malloc((queriesSize + 1) * sizeof(char));
    result[queriesSize] = '\0';

    for (int i = 0; i < numsSize - 1; i++) {
        if (i - 1 >= 0 && i <= nums[i - 1]) {
            nums[i] = nums[i - 1];
            continue;
        }

        int temp = i;
        while (temp < numsSize - 1 && nums[temp] % 2 != nums[temp + 1] % 2)
            temp++;
        nums[i] = temp;
    }
    nums[numsSize - 1] = numsSize - 1;

    for (int i = 0; i < queriesSize; i++) {
        if (nums[queries[i][0]] >= queries[i][1])
            result[i] = true;
        else
            result[i] = false;
    }

    *returnSize = queriesSize;
    return result;
}