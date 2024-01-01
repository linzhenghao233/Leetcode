void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int last = nums1Size - 1;
    int nums1_last = m - 1;
    int nums2_last = n - 1;

    while (nums1_last >= 0 && nums2_last >= 0) {
        if (nums1[nums1_last] >= nums2[nums2_last])
            nums1[last--] = nums1[nums1_last--];
        else
            nums1[last--] = nums2[nums2_last--];
    }

    while (nums2_last >= 0)
        nums1[last--] = nums2[nums2_last--];
}