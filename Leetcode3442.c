int maxDifference(char* s) {
    int cnt[26] = { 0 };
    int a1 = 0;
    int a2 = INT_MAX;
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        int temp = (int)s[i] - 'a';
        cnt[temp]++;
    }
    for (int i = 0; i < 26; i++) {
        if (!cnt[i])
            continue;
        if (cnt[i] % 2 && cnt[i] > a1)
            a1 = cnt[i];
        else if (cnt[i] % 2 == 0 && cnt[i] < a2)
            a2 = cnt[i];
    }

    return a1 - a2;
}