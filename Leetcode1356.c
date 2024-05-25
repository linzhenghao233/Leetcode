/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int count(int n) {
    int result = 0;

    while (n > 0) {
        n &= (n - 1);
        result++;
    }

    return result;
}

int cmp(const void* a, const void* b) {
    return count(*(int*)a) == count(*(int*)b) ? *(int*)a - *(int*)b : count(*(int*)a) - count(*(int*)b);
}

int* sortByBits(int* arr, int arrSize, int* returnSize) {
    *returnSize = arrSize;
    qsort(arr, arrSize, sizeof(int), cmp);

    return arr;
}