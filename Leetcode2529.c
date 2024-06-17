int maximumCount(int* nums, int numsSize) {
    int num1 = 0, num2 = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] < 0)
            num1++;
        else if (nums[i] > 0)
            num2++;
    }

    return num1 > num2 ? num1 : num2;
}