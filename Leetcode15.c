int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    int row = 0;
    int** arr = (int**)malloc(1000 * sizeof(int*));

    // Sort the array first to apply the two-pointer approach
    qsort(nums, numsSize, sizeof(int), compareFunc);

    for (int left = 0; left < numsSize - 2; left++) {
        if (left > 0 && nums[left] == nums[left - 1])
            continue;

        int mid = left + 1;
        int right = numsSize - 1;

        while (mid < right) {
            int sum = nums[left] + nums[mid] + nums[right];
            if (sum == 0) {
                arr[row] = (int*)malloc(3 * sizeof(int));
                arr[row][0] = nums[left];
                arr[row][1] = nums[mid];
                arr[row][2] = nums[right];
                row++;

                // Skip duplicates
                while (mid < right && nums[mid] == nums[mid + 1])
                    mid++;
                while (mid < right && nums[right] == nums[right - 1])
                    right--;

                mid++;
                right--;
            }
            else if (sum < 0) {
                mid++;
            }
            else {
                right--;
            }
        }
    }

    *returnSize = row;
    *returnColumnSizes = (int*)malloc(row * sizeof(int));
    for (int i = 0; i < row; i++) {
        (*returnColumnSizes)[i] = 3;
    }

    return arr;
}
