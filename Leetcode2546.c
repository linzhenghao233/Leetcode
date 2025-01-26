bool makeStringsEqual(char* s, char* target) {
    int s_cnt1 = 0;
    int t_cnt1 = 0;
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        if (s[i] == '1')
            s_cnt1++;
        if (target[i] == '1')
            t_cnt1++;
    }

    if ((s_cnt1 && t_cnt1) || (!s_cnt1 && !t_cnt1))
        return true;
    else
        return false;
}