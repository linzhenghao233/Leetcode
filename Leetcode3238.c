int winningPlayerCount(int n, int** pick, int pickSize, int* pickColSize) {
    int table[11][11] = { 0 };
    int result = 0;
    bool again[11] = { false };

    for (int i = 0; i < pickSize; i++) {
        table[pick[i][0]][pick[i][1]]++;
        if (table[pick[i][0]][pick[i][1]] > pick[i][0] && !again[pick[i][0]]) {
            result++;
            again[pick[i][0]] = true;
            continue;
        }
    }

    return result;
}