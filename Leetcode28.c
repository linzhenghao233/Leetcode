int strStr(char* haystack, char* needle) {
    int len_h = strlen(haystack);
    int len_n = strlen(needle);

    if (len_h < len_n)
        return -1;

    for (int i = 0; i < len_h; i++) {
        if (len_h - i < len_n)
            break;
        if (haystack[i] == needle[0]) {
            int j;
            for (j = 1; j < len_n; j++) {
                if (i + j < len_h && haystack[i + j] != needle[j])
                    break;
            }
            if (j == len_n)
                return i;
        }
    }
    return -1;
}