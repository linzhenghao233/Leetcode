int smallestIndex(int* nums, int numsSize) {
    for (int i = 0; i < numsSize; i++) {
        int temp = 0;
        while (nums[i]) {
            temp += nums[i] % 10;
            nums[i] /= 10;
        }
        if (temp == i)
            return i;
    }

    return -1;
}