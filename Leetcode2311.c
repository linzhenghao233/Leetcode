int longestSubsequence(char* s, int k) {
    int zero_cnt = 0;
    int one_cnt = 0;
    int len = strlen(s);
    long long num = 0;
    long long val = 1;

    for (int i = 0; i < len; i++) {
        if (s[i] == '0')
            zero_cnt++;
    }

    for (int i = len - 1; i >= 0; i--) {
        if (s[i] == '1') {
            if (val > k)
                break;
            if (num + val <= k) {
                num += val;
                one_cnt += 1;
            }
        }
        if (val <= k)
            val *= 2;
        else
            val = k + 1;
    }

    return one_cnt + zero_cnt;
}