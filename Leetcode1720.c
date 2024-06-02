/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decode(int* encoded, int encodedSize, int first, int* returnSize) {
    int* result = (int*)malloc((encodedSize + 1) * sizeof(int));
    *returnSize = encodedSize + 1;
    result[0] = first;

    for (int i = 1; i <= encodedSize; i++)
        result[i] = result[i - 1] ^ encoded[i - 1];

    return result;
}