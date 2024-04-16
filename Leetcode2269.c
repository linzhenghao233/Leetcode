int divisorSubstrings(int num, int k) {
    int i = 0;
    int temp = num;
    int result = 0;
    int count = 0;

    while (temp) {
        temp /= 10;
        count++;
    }

    temp = num;
    while (temp && count >= k) {
        int window = temp % (int)pow(10, k);

        if (window != 0 && num % window == 0)
            result++;
        temp /= 10;
        count--;
    }
    return result;
}