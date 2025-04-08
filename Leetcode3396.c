int minimumOperations(int* nums, int numsSize) {
    int cnt[101] = { 0 };

    for (int i = numsSize - 1; i >= 0; i--) {
        if (cnt[nums[i]]) {
            int add = (i + 1) % 3 != 0;
            return (i + 1) / 3 + add;
        }
        cnt[nums[i]]++;
    }

    return 0;
}