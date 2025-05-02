/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sumZero(int n, int* returnSize) {
    int* result = (int*)malloc(n * sizeof(int));
    *returnSize = n;
    int left = 0;
    int right = n - 1;
    int num = 1;

    while (left < right) {
        result[left] = num;
        result[right] = -num;
        num++;
        left++;
        right--;
    }
    if (n % 2)
        result[left] = 0;

    return result;
}