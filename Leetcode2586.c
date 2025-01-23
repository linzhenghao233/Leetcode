int vowelStrings(char** words, int wordsSize, int left, int right) {
    bool vowel[26] = { false };
    vowel[(int)'a' - 'a'] = true;
    vowel[(int)'e' - 'a'] = true;
    vowel[(int)'i' - 'a'] = true;
    vowel[(int)'o' - 'a'] = true;
    vowel[(int)'u' - 'a'] = true;
    int result = 0;

    for (int i = left; i <= right; i++) {
        int len = strlen(words[i]);
        if (vowel[(int)words[i][0] - 'a'] && vowel[(int)words[i][len - 1] - 'a'])
            result++;
    }

    return result;
}