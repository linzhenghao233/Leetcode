/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findKDistantIndices(int* nums, int numsSize, int key, int k, int* returnSize) {
    int* result = (int*)malloc(numsSize * sizeof(int));
    *returnSize = 0;
    int index = -1;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == key) {
            int start = i - k > 0 ? i - k : 0;
            int end = i + k >= numsSize ? numsSize - 1 : i + k;
            int cur = start > index ? start : index + 1;

            for (int j = cur; j <= end; j++) {
                result[(*returnSize)++] = j;
            }
            index = end;
        }
    }

    return result;
}