int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int minDeletion(char* s, int k) {
    int cnt[26] = { 0 };
    int diff = 0;
    int len = strlen(s);
    int result = 0;

    for (int i = 0; i < len; i++) {
        int index = (int)s[i] - 'a';
        if (cnt[index] == 0)
            diff++;
        cnt[index]++;
    }

    if (diff <= k)
        return 0;
    qsort(cnt, 26, sizeof(int), cmp);
    int flag = diff - k;
    int index = 0;
    while (flag) {
        if (cnt[index] == 0) {
            index++;
            continue;
        }
        result += cnt[index];
        index++;
        flag--;
    }

    return result;
}