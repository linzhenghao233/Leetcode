/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findEvenNumbers(int* digits, int digitsSize, int* returnSize) {
    int cnt[10] = { 0 };
    int* result = (int*)malloc(1000 * sizeof(int));
    *returnSize = 0;

    for (int i = 0; i < digitsSize; i++) {
        cnt[digits[i]]++;
    }

    for (int i = 100; i < 1000; i += 2) {
        int temp[10] = { 0 };
        int flag = 0;
        for (int j = i; j > 0; j /= 10) {
            int num = j % 10;
            if (++temp[num] > cnt[num]) {
                flag = 1;
                break;
            }
        }
        if (flag)
            continue;
        result[(*returnSize)++] = i;
    }

    return result;
}