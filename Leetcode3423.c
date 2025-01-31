int maxAdjacentDistance(int* nums, int numsSize) {
    int result = 0;

    for (int i = 0; i < numsSize; i++) {
        int num2 = nums[(i + 1) % numsSize];
        int temp = abs(nums[i] - num2);

        if (temp > result)
            result = temp;
    }

    return result;
}