bool canAliceWin(int* nums, int numsSize) {
    int num1 = 0;
    int num2 = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] < 10)
            num1 += nums[i];
        else
            num2 += nums[i];
    }

    return num1 == num2 ? false : true;
}