bool isRobotBounded(char* instructions) {
    int direction = 1;//1北，2东，3南，4西
    int row = 0, col = 0;
    int len = strlen(instructions);

    for (int i = 0; i < 4; i++) {
        for (int i = 0; i < len; i++) {
            if (instructions[i] == 'G') {
                switch (direction) {
                case 1:col++; break;
                case 2:row++; break;
                case 3:col--; break;
                case 4:row--;
                }
            }
            else if (instructions[i] == 'L') {
                direction--;
                if (direction == 0)
                    direction += 4;
            }
            else {
                direction++;
                if (direction > 4)
                    direction %= 4;
            }
        }
    }

    if (row == 0 && col == 0)
        return true;
    return false;
}