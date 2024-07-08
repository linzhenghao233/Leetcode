/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int left = 0, right = numbersSize - 1;
    int* result = (int*)malloc(2 * sizeof(int));

    while (left < right) {
        int flag = numbers[left] + numbers[right];

        if (flag == target) {
            result[0] = left + 1;
            result[1] = right + 1;
            break;
        }
        else if (flag < target)
            left++;
        else
            right--;
    }
    *returnSize = 2;

    return result;
}