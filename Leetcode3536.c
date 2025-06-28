int maxProduct(int n) {
    int cnt[10] = { 0 };
    int num1 = -1;
    int num2 = -1;

    while (n) {
        cnt[n % 10]++;
        n /= 10;
    }
    for (int i = 9; i >= 0; i--) {
        while (cnt[i] > 0) {
            if (num1 == -1) {
                num1 = i;
                cnt[i]--;
            }
            else {
                num2 = i;
                return num1 * num2;
            }
        }
    }

    return 0;
}