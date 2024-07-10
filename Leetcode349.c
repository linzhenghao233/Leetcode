/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int* result = (int*)calloc(1001, sizeof(int));
    int* hash = (int*)calloc(1001, sizeof(int));
    int index = 0;

    for (int i = 0; i < nums1Size; i++) {
        if (hash[nums1[i]] == 0)
            hash[nums1[i]] = 1;
    }

    for (int i = 0; i < nums2Size; i++) {
        if (hash[nums2[i]] == 1) {
            result[index] = nums2[i];
            index++;
            hash[nums2[i]] = 0;
        }
    }

    *returnSize = index;
    free(hash);
    return result;
}