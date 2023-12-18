int lengthOfLastWord(char* s) {
    int result, n;
    char ch;
    result = 0;
    n = strlen(s) - 1;

    while (n >= 0 && s[n] == ' ')
        n--;
    while (n >= 0 && s[n--] != ' ')
        result++;
    return result;
}