int countLargestGroup(int n) {
    int cnt[37] = { 0 };
    int max = 0;
    int result = 0;

    while (n) {
        int num = n;
        int temp = 0;
        while (num) {
            temp += num % 10;
            num /= 10;
        }
        cnt[temp]++;
        n--;
        if (cnt[temp] > max)
            max = cnt[temp];
    }
    for (int i = 0; i < 28; i++) {
        if (cnt[i] == max)
            result++;
    }

    return result;
}