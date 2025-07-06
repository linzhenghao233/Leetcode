bool halvesAreAlike(char* s) {
    char a[11] = "aeiouAEIOU";
    int left = 0;
    int right = strlen(s) - 1;
    int cnt1 = 0;
    int cnt2 = 0;

    while (left < right) {
        for (int i = 0; i < 11; i++) {
            if (s[left] == a[i])
                cnt1 += 1;
            if (s[right] == a[i])
                cnt2 += 1;
        }
        left += 1;
        right -= 1;
    }

    return cnt1 == cnt2;
}