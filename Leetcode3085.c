int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int minimumDeletions(char* word, int k) {
    int cnt[26] = { 0 };
    int len = 0;
    for (len = 0; word[len]; len++) {
        cnt[(int)word[len] - 'a']++;
    }
    qsort(cnt, 26, sizeof(int), cmp);

    int max = 0;
    for (int i = 0; i < 26; i++) {
        int sum = 0;
        for (int j = i; j < 26; j++) {
            sum += fmin(cnt[j], cnt[i] + k);
        }
        max = fmax(max, sum);
    }

    return len - max;
}