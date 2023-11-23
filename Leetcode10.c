bool isMatch(char* s, char* p) {
    int jump, mul, i, j, s_len, p_len;
    s_len = strlen(s);
    p_len = strlen(p);
    jump = mul = 0;

    for (i = 0, j = 0; i < s_len && j < p_len; i++, j++) {
        if (s[i] == p[j])
            continue;
        if (p[j] == '.') {
            if (j + 1 < p_len && p[j + 1] == '*' && j + 2 >= p_len)
                return true;
            else if (j + 1 < p_len && p[j + 1] == '*' && j + 2 < p_len)
                return false;
            continue;
        }
        if (p[j] == '*') {
            char temp = p[j - 1];
            if (temp != s[i]) {
                i--;
                continue;
            }
            while (i < s_len && s[i] == temp) {
                i++;
                if (i < s_len && i < p_len && s[i] == p[i]) {
                    i++;
                    break;
                }
            }
            i--;
            continue;
        }
        if (s[i] != p[j]) {
            i--;
        }
    }
    if (i == s_len && j == p_len)
        return true;
    else
        return false;
}


//以上的代码未完成，下面的代码用递归，时间和空间都用太多
bool isMatch(char* s, char* p) {
    int i, j, s_len, p_len;
    s_len = strlen(s);
    p_len = strlen(p);

    for (i = 0, j = 0; i < s_len || j < p_len; i++, j++) {
        if (j + 1 < p_len && p[j + 1] == '*') {
            char temp = p[j];
            j++;
            while (i < s_len && (s[i] == temp || temp == '.')) {
                if (isMatch(s + i, p + j + 1))
                    return true;
                i++;
            }
            return isMatch(s + i, p + j + 1);
        }
        if (i >= s_len || (s[i] != p[j] && p[j] != '.'))
            return false;
    }
    return true;
}