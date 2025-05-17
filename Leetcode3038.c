int maxOperations(int* nums, int numsSize) {
    int sum = nums[0] + nums[1];
    int result = 1;

    for (int i = 3; i < numsSize; i += 2) {
        if (nums[i - 1] + nums[i] != sum)
            break;
        result++;
    }

    return result;
}