int arithmeticTriplets(int* nums, int numsSize, int diff) {
    int arr[201] = { 0 };
    int result = 0;

    for (int i = 0; i < numsSize; i++)
        arr[nums[i]] = 1;

    for (int i = 0; i < numsSize; i++) {
        int value = nums[i];
        if (value + 2 * diff <= 200 && arr[value + diff] && arr[value + 2 * diff])
            result++;
    }

    return result;
}