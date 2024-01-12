int cmp(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

bool canMakeArithmeticProgression(int* arr, int arrSize) {
    qsort(arr, arrSize, sizeof(int), cmp);
    int diff = arr[1] - arr[0];

    for (int i = 1; i < arrSize; i++) {
        int temp = arr[i] - arr[i - 1];
        if (temp != diff)
            return false;
    }
    return true;
}