int numRookCaptures(char** board, int boardSize, int* boardColSize) {
    int x, y;
    int result = 0;
    int dnxb[4] = { 0 };
    x = y = 0;

    for (int i = 0; i < boardSize; i++) {
        for (int j = 0; j < *boardColSize; j++) {
            if (board[i][j] == 'R') {
                x = i;
                y = j;
                i = boardSize;
                break;
            }
        }
    }

    for (int i = 1; i < 8; i++) {
        if (y + i < 8 && board[x][y + i] == 'p' && dnxb[0] == 0)
            dnxb[0] = 64;
        else if (y + i < 8 && board[x][y + i] == 'B')
            dnxb[0] -= 8;

        if (x + i < 8 && board[x + i][y] == 'p' && dnxb[1] == 0)
            dnxb[1] = 64;
        else if (x + i < 8 && board[x + i][y] == 'B')
            dnxb[1] -= 8;

        if (y - i >= 0 && board[x][y - i] == 'p' && dnxb[2] == 0)
            dnxb[2] = 64;
        else if (y - i >= 0 && board[x][y - i] == 'B')
            dnxb[2] -= 8;

        if (x - i >= 0 && board[x - i][y] == 'p' && dnxb[3] == 0)
            dnxb[3] = 64;
        else if (x - i >= 0 && board[x - i][y] == 'B')
            dnxb[3] -= 8;
    }

    for (int i = 0; i < 4; i++) {
        if (dnxb[i] > 0)
            result++;
    }

    return result;
}