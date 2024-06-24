//没做出来。第二次也没做出来。
int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int minAbsoluteSumDiff(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int max = INT_MIN;
    long result = 0;
    int target;
    int left = 0, right = nums1Size - 1;
    int MOD = 10e9 + 7;

    for (int i = 0; i < nums1Size; i++) {
        int temp = abs(nums1[i] - nums2[i]);

        result += temp;
        if (temp > max) {
            max = temp;
            target = nums2[i];
        }
    }

    qsort(nums1, nums1Size, sizeof(int), cmp);
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums1[mid] >= target)
            right = mid - 1;
        else
            left = mid + 1;
    }

    left = fmax(left, 0);
    int new = abs(nums1[left] - target);
    if (left > 0)
        new = fmin(new, abs(nums1[left - 1] - target));
    result = (result - max + new) % MOD;

    return (int)result;
}