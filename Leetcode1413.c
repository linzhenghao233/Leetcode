int minStartValue(int* nums, int numsSize) {
    int result = 0;
    int temp = 0;

    for (int i = 0; i < numsSize; i++) {
        temp += nums[i];
        if (temp < result)
            result = temp;
    }

    return abs(result) + 1;
}