int minimumSum(int n, int k) {
    int index = 0;
    int value = 1;
    int result = 0;

    while (index < n) {
        int temp = k - value;
        if (temp >= value || temp <= 0) {
            result += value;
            index++;
        }
        value++;
    }

    return result;
}