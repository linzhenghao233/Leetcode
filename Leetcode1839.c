int longestBeautifulSubstring(char* word) {
    int result = 0;
    int len = strlen(word);
    int i = 0;

    while (i < len) {
        int cnt[5] = { 0 };
        while (i < len && word[i] == 'a') {
            cnt[0]++;
            i++;
        }
        while (i < len && word[i] == 'e') {
            cnt[1]++;
            i++;
        }
        while (i < len && word[i] == 'i') {
            cnt[2]++;
            i++;
        }
        while (i < len && word[i] == 'o') {
            cnt[3]++;
            i++;
        }
        while (i < len && word[i] == 'u') {
            cnt[4]++;
            i++;
        }
        int flag = 0;
        int temp = 0;
        for (int j = 0; j < 5; j++) {
            temp += cnt[j];
            if (cnt[j] != 0)
                flag++;
        }
        if (flag == 5) {
            result = temp > result ? temp : result;
        }
    }

    return result;
}