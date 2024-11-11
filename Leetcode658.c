/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findClosestElements(int* arr, int arrSize, int k, int x, int* returnSize) {
    int* result = (int*)malloc(k * sizeof(int));
    int left = 0;
    int right = arrSize - 1;

    while (right - left >= k) {
        if (abs(arr[left] - x) > abs(arr[right] - x))
            left++;
        else
            right--;
    }

    for (int i = left; i <= right; i++)
        result[i - left] = arr[i];

    *returnSize = k;
    return result;
}