char* makeFancyString(char* s) {
    int len = strlen(s);
    char* result = (char*)malloc((len + 1) * sizeof(char));
    int index = 0;
    int cnt = 0;
    int left = 0;
    int right = 0;

    while (right < len) {
        if (s[left] == s[right]) {
            cnt++;
        }
        else {
            cnt = 1;
            left = right;
        }

        if (cnt != 3) {
            result[index] = s[right];
            index++;
        }
        else {
            cnt--;
        }

        right++;
    }

    result[index] = '\0';
    return result;
}