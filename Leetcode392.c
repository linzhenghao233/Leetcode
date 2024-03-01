bool isSubsequence(char* s, char* t) {
    int s_left = 0, t_left = 0;
    int s_right = strlen(s) - 1, t_right = strlen(t) - 1;

    while (s_left <= s_right && t_left <= t_right) {
        if (t[t_left] == s[s_left]) {
            s_left++;
            if (t_left == t_right)
                break;
        }
        if (t[t_right] == s[s_right])
            s_right--;
        t_left++;
        t_right--;
    }

    if (s_left > s_right)
        return true;
    return false;
}