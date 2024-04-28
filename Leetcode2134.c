int minSwaps(int* nums, int numsSize) {
    int len = 0;
    int window = 0;
    int max = 0;
    int* doublenums = (int*)malloc(numsSize * 2 * sizeof(int));

    for (int i = 0; i < numsSize; i++)
        doublenums[i] = nums[i];
    for (int i = 0; i < numsSize; i++)
        doublenums[i + numsSize] = nums[i];

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == 1)
            len++;
    }
    for (int i = 0; i < len; i++) {
        if (nums[i] == 1)
            window++;
    }
    max = window;

    for (int i = len; i < 2 * numsSize; i++) {
        window += doublenums[i] - doublenums[i - len];
        if (window > max)
            max = window;
    }
    free(doublenums);
    return len - max;
}