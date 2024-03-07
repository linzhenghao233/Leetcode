

int countOdds(int low, int high) {
    int result = 0;

    if (low % 2 != 0) {
        result++;
        low++;
    }
    if (high % 2 != 0) {
        result++;
        high--;
    }
    result += (high - low) / 2;

    return result;
}