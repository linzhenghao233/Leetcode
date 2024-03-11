int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int result = 0;
    int temp = 0;

    for (int i = 0; i < accountsSize; i++) {
        for (int j = 0; j < *accountsColSize; j++) {
            temp += accounts[i][j];
        }
        if (temp > result)
            result = temp;
        temp = 0;
    }

    return result;
}