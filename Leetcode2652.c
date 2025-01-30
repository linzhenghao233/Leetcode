int sumOfMultiples(int n) {
    int result = 0;

    while (n) {
        if (!(n % 3) || !(n % 5) || !(n % 7))
            result += n;
        n -= 1;
    }

    return result;
}