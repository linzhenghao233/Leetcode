int countEven(int num) {
    int result = 0;

    for (int i = 1; i <= num; i++) {
        int count = 0;
        int temp = i;

        while (temp) {
            count += temp % 10;
            temp /= 10;
        }
        if (!(count % 2))
            result++;
    }

    return result;
}