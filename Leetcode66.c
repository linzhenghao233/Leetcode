/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int i = digitsSize - 1;
    int* arr;
    digits[i]++;

    while (i >= 0) {
        int temp = digits[i] / 10;
        if (temp > 0) {
            digits[i] -= 10;
            if (i - 1 >= 0)
                digits[i - 1]++;
        }
        else {
            *returnSize = digitsSize;
            return digits;
        }
        i--;
    }
    *returnSize = digitsSize + 1;
    arr = (int*)malloc(*returnSize * sizeof(int));
    arr[0] = 1;
    for (int i = 0; i < digitsSize; i++)
        arr[i + 1] = digits[i];
    return arr;
}