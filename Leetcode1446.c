int maxPower(char* s) {
    int result = 1;
    int len = strlen(s);
    int temp = 1;
    int index = 1;

    while (index < len) {
        if (s[index] == s[index - 1]) {
            temp++;
            result = temp > result ? temp : result;
        }
        else
            temp = 1;
        index++;
    }

    return result;
}