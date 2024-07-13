int cnt(int num) {
    int count = 0;

    for (int i = 0; i < 32; i++)
        count += (num >> i) & 1;

    return count;
}

bool canSortArray(int* nums, int numsSize) {
    int* arr = (int*)malloc(numsSize * sizeof(int));

    for (int i = 0; i < numsSize; i++)
        arr[i] = cnt(nums[i]);

    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = 0; j < numsSize - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                if (arr[j] != arr[j + 1]) {
                    free(arr);
                    return false;
                }
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    free(arr);
    return true;
}