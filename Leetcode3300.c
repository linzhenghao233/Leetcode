int minElement(int* nums, int numsSize) {
    int result = INT_MAX;

    for (int i = 0; i < numsSize; i++) {
        int temp = 0;
        while (nums[i]) {
            temp += nums[i] % 10;
            nums[i] /= 10;
        }

        if (temp < result)
            result = temp;
    }

    return result;
}