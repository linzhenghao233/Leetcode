int longestEqualSubarray(int* nums, int numsSize, int k) {
    int* hash = (int*)calloc(numsSize + 1, sizeof(int));
    int left, right;
    int result;
    int count = k;
    left = right = result = 0;

    while (right < numsSize) {
        hash[nums[right]]++;

        if (result < hash[nums[right]])
            result = hash[nums[right]];
        else
            count--;

        if (count < 0) {
            hash[nums[left]]--;
            left++;
            count++;
        }
        right++;
    }
    free(hash);
    return result;
}