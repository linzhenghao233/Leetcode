int cmp(const void* a, const void* b) {
    return *(int*)b - *(int*)a;
}

int minSetSize(int* arr, int arrSize) {
    int cnt[100001] = { 0 };
    for (int i = 0; i < arrSize; i++)
        cnt[arr[i]]++;
    qsort(cnt, 100001, sizeof(int), cmp);
    int flag = arrSize / 2;
    int result = 0;
    int index = 0;

    while (flag > 0) {
        result += 1;
        flag -= cnt[index];
        index += 1;
    }

    return result;
}