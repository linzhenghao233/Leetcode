bool checkRecord(char* s) {
    int A = 0;
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        if (s[i] == 'A')
            A++;
        if (s[i] == 'L' && i + 2 < len && s[i + 1] == 'L' && s[i + 2] == 'L')
            return false;
        if (A >= 2)
            return false;
    }

    return true;
}