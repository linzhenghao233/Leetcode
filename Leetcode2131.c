int longestPalindrome(char** words, int wordsSize) {
    int cnt[26][26] = { 0 };
    int result = 0;
    int odd = 0;

    for (int i = 0; i < wordsSize; i++) {
        int a = (int)words[i][0] - 'a';
        int b = (int)words[i][1] - 'a';
        cnt[a][b]++;
        if (a == b)
            continue;
        else if (cnt[a][b] <= cnt[b][a])
            result += 4;
    }
    for (int i = 0; i < 26; i++) {
        int c = cnt[i][i];
        result += (c & ~1) << 1;
        odd |= c % 2;
    }

    return result + (odd << 1);
}