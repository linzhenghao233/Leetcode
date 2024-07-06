int jump(int* nums, int numsSize) {
    int max = 0;
    int result = 0;
    int next_max = 0;

    for (int i = 0; i < numsSize - 1; i++) {
        if (nums[i] + i > next_max)
            next_max = nums[i] + i;

        if (i == max) {
            max = next_max;
            result++;
        }
    }

    return result;
}