int appendCharacters(char* s, char* t) {
    int p1 = 0;
    int p2 = 0;
    int s_len = strlen(s);
    int t_len = strlen(t);

    while (p1 < s_len && p2 < t_len) {
        if (s[p1] == t[p2])
            p2++;
        p1++;
    }

    return t_len - p2;
}