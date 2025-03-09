int maxDistance(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int nums2_index = 0;
    int nums1_index = 0;
    int result = 0;

    while (nums2_index < nums2Size && nums1_index < nums1Size) {
        if (nums1[nums1_index] > nums2[nums2_index]) {
            if (nums1_index == nums2_index) {
                nums1_index++;
                nums2_index++;
            }
            else
                nums1_index++;
        }
        else {
            result = fmax(nums2_index - nums1_index, result);
            nums2_index++;
        }
    }

    return result;
}