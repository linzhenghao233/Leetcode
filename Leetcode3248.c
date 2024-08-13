int finalPositionOfSnake(int n, char** commands, int commandsSize) {
    int result = 0;

    for (int i = 0; i < commandsSize; i++) {
        switch (commands[i][0]) {
        case 'U':
            result -= n;
            break;
        case 'R':
            result++;
            break;
        case 'D':
            result += n;
            break;
        case 'L':
            result--;
        }
    }

    return result;
}