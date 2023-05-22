int climbStairs(int n) {
    int sum = 1 + n - 1;
    int x = n - 2 - 1;
    int two = 2;
    int amount = n - 2;

    while (two <= amount) {
        x = n - two - 1;
        while (x >= 1) {
            sum += x;
            x--;
        }
        two++;
        amount--;
    }
    return sum;
}