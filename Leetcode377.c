int combinationSum4(int* nums, int numsSize, int target) {
    unsigned int* arr = (unsigned int*)calloc(target + 1, sizeof(unsigned int));
    int result = 0;
    arr[0] = 1;

    for (int i = 1; i <= target; i++) {
        for (int j = 0; j < numsSize; j++) {
            int temp = nums[j];
            if (temp <= i)
                arr[i] += arr[i - temp];
        }
    }
    result = arr[target];

    free(arr);
    return result;
}