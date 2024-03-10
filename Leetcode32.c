int longestValidParentheses(char* s) {
    int temp = 0;
    int result = 0;
    int left_count = 0;
    int right_count = 0;
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        if (s[i] == '(')
            left_count++;
        else
            right_count++;

        if (left_count >= right_count) {
            temp += right_count * 2;
            left_count -= right_count;
            right_count = 0;
        }
        else {
            if (temp > result)
                result = temp;
            temp = 0;
        }
    }
    if (temp > result)
        result = temp;

    return result;
}