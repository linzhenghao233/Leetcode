bool judgeCircle(char* moves) {
    int x = 0, y = 0;

    for (int i = 0; moves[i] != '\0'; i++) {
        switch (moves[i]) {
        case 'R':x++; break;
        case 'L':x--; break;
        case 'U':y++; break;
        case 'D':y--;
        }
    }
    if (x == 0 && y == 0)
        return true;
    return false;
}