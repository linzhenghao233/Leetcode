int divisorSubstrings(int num, int k) {
    int count = 0;
    int temp = num;

    while (temp > 0) {
        count++;
        temp /= 10;
    }
    temp = num;
}