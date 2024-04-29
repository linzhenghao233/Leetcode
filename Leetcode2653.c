/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getSubarrayBeauty(int* nums, int numsSize, int k, int x, int* returnSize) {
    int* result = (int*)malloc((numsSize - k + 1) * sizeof(int));
    int* hash = (int*)calloc(101, sizeof(int));
    int index = 0;
    int flag = 0;

    for (int i = 0; i < k; i++)
        hash[nums[i] + 50]++;
    for (int i = 0; i < 101; i++) {
        flag += hash[i];
        if (flag >= x) {
            if (i - 50 < 0)
                result[index++] = i - 50;
            else
                result[index++] = 0;
            break;
        }
    }

    for (int i = k; i < numsSize; i++) {
        hash[nums[i] + 50]++;
        hash[nums[i - k] + 50]--;
        flag = 0;
        for (int i = 0; i < 101; i++) {
            flag += hash[i];
            if (flag >= x) {
                if (i - 50 < 0)
                    result[index++] = i - 50;
                else
                    result[index++] = 0;
                break;
            }
        }
    }
    *returnSize = numsSize - k + 1;
    return result;
}