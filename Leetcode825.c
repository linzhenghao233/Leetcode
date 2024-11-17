int numFriendRequests(int* ages, int agesSize) {
    int table[121] = { 0 };
    for (int i = 0; i < agesSize; i++)
        table[ages[i]]++;
    int result = 0;
    int windows = 0;
    int y = 0;

    for (int x = 0; x < 121; x++) {
        windows += table[x];
        if (y * 2 - 14 <= x) {
            windows -= table[y];
            y++;
        }
        if (windows > 0)
            result += table[x] * windows - table[x];
    }

    return result;
}