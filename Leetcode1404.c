int numSteps(char* s) {
    int result = 0;
    int i = strlen(s) - 1;
    int add = 0;

    while (i > 0) {
        if (s[i] == '0') {
            result++;
            i--;
        }
        else {
            result++;
            while (i >= 0 && s[i] == '1') {
                result++;
                i--;
            }
            if (i > 0)
                s[i] = '1';
        }
    }

    return result;
}