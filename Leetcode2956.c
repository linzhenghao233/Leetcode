/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findIntersectionValues(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int hash1[101] = { 0 };
    int hash2[101] = { 0 };
    int* result = (int*)calloc(2, sizeof(int));

    for (int i = 0; i < nums1Size; i++)
        hash1[nums1[i]]++;
    for (int i = 0; i < nums2Size; i++)
        hash2[nums2[i]]++;

    for (int i = 1; i < 101; i++) {
        if (hash1[i] && hash2[i]) {
            result[0] += hash1[i];
            result[1] += hash2[i];
        }
    }

    *returnSize = 2;
    return result;
}