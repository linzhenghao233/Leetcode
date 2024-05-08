int maxConsecutiveAnswers(char* answerKey, int k) {
    int T_count, F_count;
    int left, right;
    int result;
    T_count = F_count = left = right = result = 0;

    while (right < strlen(answerKey)) {
        if (answerKey[right] == 'T')
            T_count++;
        else
            F_count++;
        while (fmin(T_count, F_count) > k) {
            if (answerKey[left] == 'T')
                T_count--;
            else
                F_count--;
            left++;
        }
        result = fmax(right - left + 1, result);
        right++;
    }
    return result;
}