int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int maxConsecutive(int bottom, int top, int* special, int specialSize) {
    qsort(special, specialSize, sizeof(int), cmp);
    int result = fmax(special[0] - bottom, top - special[specialSize - 1]);

    for (int i = 1; i < specialSize; i++)
        result = fmax(result, special[i] - special[i - 1] - 1);

    return result;
}