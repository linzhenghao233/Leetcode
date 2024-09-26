int differenceOfSum(int* nums, int numsSize) {
    int result = 0;

    for (int i = 0; i < numsSize; i++) {
        result += nums[i];

        while (nums[i]) {
            result -= nums[i] % 10;
            nums[i] /= 10;
        }
    }

    return result;
}