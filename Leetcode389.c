char findTheDifference(char* s, char* t) {
    int sum = 0;
    char res;

    for (int i = 0; i < strlen(t); i++) {
        sum += (int)t[i];
        if (i < strlen(s))
            sum -= (int)s[i];
    }
    res = (char)sum;
    return res;
}