int firstMissingPositive(int* nums, int numsSize) {
    int* hash = (int*)calloc(numsSize + 1, sizeof(int));
    int i, count = 0;

    for (i = 0; i < numsSize; i++) {
        if (nums[i] <= numsSize && nums[i] > 0)
            hash[nums[i]] = 1;
        count++;
    }

    for (i = 1; i <= count; i++) {
        if (hash[i] == 0) {
            free(hash);
            return i;
        }
    }
    free(hash);
    return numsSize + 1;
}