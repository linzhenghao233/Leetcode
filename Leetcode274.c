int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int hIndex(int* citations, int citationsSize) {
    int left = 0;
    int right = citationsSize - 1;
    int result = 0;
    qsort(citations, citationsSize, sizeof(int), cmp);

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (citations[mid] >= citationsSize - mid) {
            if (citationsSize - mid > result)
                result = citationsSize - mid;
            right = mid - 1;
        }
        else
            left = mid + 1;
    }

    return result;
}