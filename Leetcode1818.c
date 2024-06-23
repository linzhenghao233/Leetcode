//没做出来
int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int minAbsoluteSumDiff(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int max = 0;
    long result = 0;
    int target;
    int left = 0, right = nums1Size - 1;
    int MOD = 10e9 + 7;

    for (int i = 0; i < nums1Size; i++) {
        int temp = abs(nums1[i] - nums2[i]);

        if (temp > max) {
            result = (result + max) % MOD;
            max = temp;
            target = nums2[i];
        }
        else
            result = (result + temp) % MOD;
    }

    qsort(nums1, nums1Size, sizeof(int), cmp);
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums1[mid] > target)
            right = mid - 1;
        else
            left = mid + 1;
    }

    return abs(result + target - nums1[left]) % MOD;
}