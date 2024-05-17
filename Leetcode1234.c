int balancedString(char* s) {
    int len = strlen(s);
    int count[26] = { 0 };
    int max = len / 4;
    int result = INT_MAX;
    int left, right;
    left = right = 0;

    for (int i = 0; i < len; i++)
        count[(int)s[i] - 'A']++;

    while (right < len) {
        count[(int)s[right] - 'A']--;

        while (left < len && count[(int)'Q' - 'A'] <= max && count[(int)'W' - 'A'] <= max && count[(int)'E' - 'A'] <= max && count[(int)'R' - 'A'] <= max) {
            result = fmin(right - left + 1, result);
            count[(int)s[left] - 'A']++;
            left++;
        }
        right++;
    }
    return result;
}