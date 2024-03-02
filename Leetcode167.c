/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int first = 0;
    int left = first + 1;
    int right = numbersSize - 1;
    int middle;
    int sum;

    while (first < numbersSize && left <= right) {
        middle = left + (right - left) / 2;
        sum = numbers[first] + numbers[middle];

        if (sum == target) {
            int* result = (int*)malloc(sizeof(int) * 2);
            *returnSize = 2;
            result[0] = first;
            result[1] = middle;

            return result;
        }

        if (sum < target)
            left = middle + 1;
        else
            right = middle - 1;

        if (left == right) {
            first++;
            left = first + 1;
            right = numbersSize - 1;
        }
    }
    *returnSize = 0;
    int* result = (int*)malloc(sizeof(int));

    return result;
}