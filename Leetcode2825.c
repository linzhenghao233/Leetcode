bool canMakeSubsequence(char* str1, char* str2) {
    int i = 0;
    int j = 0;
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    while (i < len1) {
        if (j < len2) {
            if (str1[i] == str2[j])
                j++;
            else {
                int next = (str1[i] - 'a' + 1) % 26;
                if (next == (str2[j] - 'a'))
                    j++;
            }
        }
        i++;
    }

    return j == len2;
}