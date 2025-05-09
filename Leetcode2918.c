long long minSum(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int zero_cnt_1 = 0;
    int zero_cnt_2 = 0;
    long long sum1 = 0;
    long long sum2 = 0;

    for (int i = 0; i < nums1Size; i++) {
        sum1 += nums1[i];
        if (!nums1[i]) {
            sum1 += 1;
            zero_cnt_1++;
        }
    }

    for (int i = 0; i < nums2Size; i++) {
        sum2 += nums2[i];
        if (!nums2[i]) {
            sum2 += 1;
            zero_cnt_2++;
        }
    }

    if (sum1 < sum2 && zero_cnt_1 <= 0)
        return -1;
    if (sum2 < sum1 && zero_cnt_2 <= 0)
        return -1;

    return fmax(sum1, sum2);
}