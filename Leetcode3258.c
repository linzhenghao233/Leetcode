int countKConstraintSubstrings(char* s, int k) {
    int result = 0;
    int len = strlen(s);
    int left = 0;
    int right = 0;
    int zero_count = 0;
    int one_count = 0;

    while (right < len) {
        if (s[right] == '0')
            zero_count++;
        else
            one_count++;

        while (zero_count > k & one_count > k) {
            if (s[left] == '0')
                zero_count--;
            else
                one_count--;
            left++;
        }

        result += right - left + 1;
        right++;
    }

    return result;
}