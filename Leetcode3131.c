int addedInteger(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int nums1_min = INT_MAX;
    int nums2_min = INT_MAX;

    for (int i = 0; i < nums1Size; i++) {
        if (nums1[i] < nums1_min)
            nums1_min = nums1[i];
        if (nums2[i] < nums2_min)
            nums2_min = nums2[i];
    }

    return nums2_min - nums1_min;
}