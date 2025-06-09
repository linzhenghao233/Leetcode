/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findThePrefixCommonArray(int* A, int ASize, int* B, int BSize, int* returnSize) {
    unsigned long preA = 0;
    unsigned long preB = 0;

    for (int i = 0; i < ASize; i++) {
        preA |= 1UL << A[i];
        preB |= 1UL << B[i];
        unsigned long temp = preA & preB;
        int cnt = 0;
        while (temp) {
            cnt += temp & 1;
            temp >>= 1;
        }
        A[i] = cnt;
    }

    *returnSize = ASize;
    return A;
}