int countCompleteSubarrays(int* nums, int numsSize) {
    int diff_cnt = 0;
    int* hash = (int*)calloc(2001, sizeof(int));
    int result = 0;
    int flag = 0;
    int left = 0, right = 0;

    for (int i = 0; i < numsSize; i++) {
        if (hash[nums[i]] == 0)
            diff_cnt++;
        hash[nums[i]]++;
    }

    memset(hash, 0, 2001 * sizeof(int));
    while (right < numsSize) {
        hash[nums[right]]++;
        if (hash[nums[right]] == 1)
            flag++;
        while (flag == diff_cnt) {
            result += (numsSize - right);
            hash[nums[left]]--;
            if (hash[nums[left]] == 0)
                flag--;
            left++;
        }
        right++;
    }
    free(hash);
    return result;
}