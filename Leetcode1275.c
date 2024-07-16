char* tictactoe(int** moves, int movesSize, int* movesColSize) {
    int map[3][3] = { 0 };
    int flag = 1;

    if (movesSize < 5)
        return "Pending";

    for (int i = 0; i < movesSize; i++) {
        map[moves[i][0]][moves[i][1]] = flag;
        flag = -flag;
    }

    int row = map[0][0] + map[1][1] + map[2][2];
    int col = map[0][2] + map[1][1] + map[2][0];
    if (row == 3 || row == -3 || col == 3 || col == -3) {
        if (movesSize % 2)
            return "A";
        return "B";
    }
    for (int i = 0; i < 3; i++) {
        row = 0;
        col = 0;
        for (int j = 0; j < 3; j++) {
            row += map[i][j];
            col += map[j][i];
        }
        if (row == 3 || row == -3 || col == 3 || col == -3) {
            if (movesSize % 2)
                return "A";
            return "B";
        }
    }

    if (movesSize < 9)
        return "Pending";
    return "Draw";
}