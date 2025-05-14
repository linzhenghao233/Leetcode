int countDistinctIntegers(int* nums, int numsSize) {
    int cnt[1000001] = { 0 };
    int result = 0;

    for (int i = 0; i < numsSize; i++) {
        if (cnt[nums[i]] == 0) {
            result++;
            cnt[nums[i]]++;
        }
    }

    for (int i = 0; i < numsSize; i++) {
        int rev = 0;
        int num = nums[i];
        while (num) {
            rev *= 10;
            rev += num % 10;
            num /= 10;
        }
        if (cnt[rev] == 0) {
            result++;
            cnt[rev]++;
        }
    }

    return result;
}