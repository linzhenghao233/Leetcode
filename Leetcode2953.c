int countCompleteSubstrings(char* word, int k) {
    int len = strlen(word);
    int* hash = (int*)calloc(26, sizeof(int));
    int result = 0;
    int j;

    for (int i = 1; i <= len / k; i++) {
        memset(hash, 0, sizeof(int) * 26);
        for (j = (i - 1) * k; j < i * k; j++)
            hash[(int)word[j] - 'a']++;
        int flag = 1;
        for (j = 0; j < 26; j++) {
            if (hash[j] != k && hash[j] != 0) {
                flag = 0;
                break;
            }
        }
        if (flag)
            result++;
        for (int m = i * k; m < len; m++) {
            hash[(int)word[m] - 'a']++;
            hash[(int)word[m - k] - 'a']--;
            flag = 1;
            for (j = 0; j < 26; j++) {
                if (hash[j] != k && hash[j] != 0) {
                    flag = 0;
                    break;
                }
            }
            if (flag)
                result++;
        }
    }
    free(hash);
    return result;
}
/*
word =
"aaa"
k =
1
输出
6
预期结果
3


word =
"gvgvvgv"
k =
2
输出
2
预期结果
1
*/