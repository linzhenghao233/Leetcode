bool checkZeroOnes(char* s) {
    int max_zero = 0;
    int max_one = 0;
    int cur_zero = 0;
    int cur_one = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '0') {
            cur_one = 0;
            cur_zero++;
            max_zero = cur_zero > max_zero ? cur_zero : max_zero;
        }
        else {
            cur_zero = 0;
            cur_one++;
            max_one = cur_one > max_one ? cur_one : max_one;
        }
    }

    return max_one > max_zero;
}