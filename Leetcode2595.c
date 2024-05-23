/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* evenOddBit(int n, int* returnSize) {
    *returnSize = 2;
    int* result = (int*)calloc(*returnSize, sizeof(int));
    bool flag = true;

    while (n > 0) {
        if (flag && n % 2)
            result[0]++;
        else if (!flag && n % 2)
            result[1]++;
        n /= 2;
        flag = !flag;
    }
    return result;
}