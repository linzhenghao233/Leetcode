int deleteAndEarn(int* nums, int numsSize) {
    int* arr, max = 0;
    arr = (int*)malloc(numsSize * sizeof(int));

    for (int i = 0; i < numsSize; i++) {
        arr[i] = nums[i];
        for (int j = 0; j < numsSize; j++) {
            if (nums[j] == nums[i] - 1 || nums[j] == nums[i] + 1 || i == j)
                continue;
            else
                arr[i] += nums[j];
        }
        if (arr[i] > max)
            max = arr[i];
    }
    free(arr);

    return max;
}