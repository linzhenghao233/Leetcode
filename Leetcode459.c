bool repeatedSubstringPattern(char* s) {
    int len = strlen(s);
    if (len < 2)
        return false;
    bool flag;

    for (int sublen = 1; sublen <= len / 2; sublen++) {
        if (len % sublen == 0) {
            flag = true;
            for (int i = sublen; i < len; i++) {
                if (s[i] != s[i - sublen]) {
                    flag = false;
                    break;
                }
            }
            if (flag)
                return true;
        }
    }
    return false;
}