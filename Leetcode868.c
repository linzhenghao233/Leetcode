int binaryGap(int n) {
    int left = 0, right = -1;
    int result = 0;

    while (n > 0) {
        if (n & 1) {
            if (right != -1)
                result = fmax(left - right, result);
            right = left;
        }
        n >>= 1;
        left++;
    }
    return result;
}