double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int nums1_index, nums2_index, nums3_index, * nums3;
    nums1_index = nums2_index = 0;
    nums3 = (int*)malloc((nums1Size + nums2Size) * sizeof(int));

    for (nums3_index = 0; nums3_index < nums1Size + nums2Size; nums3_index++) {
        if (nums1Size == 0) {
            nums3[nums3_index] = nums2[nums2_index];
            nums2_index++;
            continue;
        }
        else if (nums2Size == 0) {
            nums3[nums3_index] = nums1[nums1_index];
            nums1_index++;
            continue;
        }
        if (nums1[nums1_index] < nums2[nums2_index]) {
            nums3[nums3_index] = nums1[nums1_index];
            nums1_index++;
            if (nums1_index == nums1Size) {
                nums1_index--;
                nums1[nums1_index] = nums2[nums2Size - 1] + 1;
            }
        }
        else {
            nums3[nums3_index] = nums2[nums2_index];
            nums2_index++;
            if (nums2_index == nums2Size) {
                nums2_index--;
                nums2[nums2_index] = nums1[nums1Size - 1] + 1;
            }
        }
    }

    int places = (nums1Size + nums2Size) / 2;
    double median = 0;
    if ((nums1Size + nums2Size) % 2 == 0)
        median = (double)(nums3[places] + nums3[places - 1]) / 2;
    else
        median = nums3[places];

    return median;
}