/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decrypt(int* code, int codeSize, int k, int* returnSize) {
    int* result = (int*)malloc(codeSize * sizeof(int));
    *returnSize = codeSize;

    for (int i = 0; i < codeSize; i++) {
        if (k == 0)
            result[i] = 0;
        if (k > 0) {
            int temp = 0;
            int j = (i + 1) % codeSize;
            int flag = k;
            while (flag) {
                temp += code[j];
                j = (j + 1) % codeSize;
                flag--;
            }
            result[i] = temp;
        }
        else {
            int temp = 0;
            int j = (i - 1 + codeSize) % codeSize;
            int flag = k;
            while (flag) {
                temp += code[j];
                j = (j - 1 + codeSize) % codeSize;
                flag++;
            }
            result[i] = temp;
        }
    }

    return result;
}