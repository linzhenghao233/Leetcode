/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findArray(int* pref, int prefSize, int* returnSize) {
    *returnSize = prefSize;
    int* result = (int*)malloc(prefSize * sizeof(int));
    int temp = pref[0];
    result[0] = pref[0];

    for (int i = 1; i < prefSize; i++) {
        result[i] = temp ^ pref[i];
        temp ^= result[i];
    }

    return result;
}