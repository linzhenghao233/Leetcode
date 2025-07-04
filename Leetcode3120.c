int numberOfSpecialChars(char* word) {
    int upper[26] = { 0 };
    int lower[26] = { 0 };
    int len = strlen(word);
    int result = 0;

    for (int i = 0; i < len; i++) {
        if (word[i] >= 'a')
            lower[(int)word[i] - 'a']++;
        else
            upper[(int)word[i] - 'A']++;
    }
    for (int i = 0; i < 26; i++) {
        if (upper[i] && lower[i])
            result++;
    }

    return result;
}