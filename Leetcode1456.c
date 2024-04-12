int maxVowels(char* s, int k) {
    int max = 0;
    int count = 0;
    int len = strlen(s);

    for (int i = 0; i < k; i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            count++;
    }
    max = count;
    if (max == k)
        return max;

    for (int i = k; i < len; i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            count++;
        if (s[i - k] == 'a' || s[i - k] == 'e' || s[i - k] == 'i' || s[i - k] == 'o' || s[i - k] == 'u')
            count--;
        if (count > max)
            max = count;
        if (max == k)
            return max;
    }
    return max;
}