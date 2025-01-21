int numberOfBeams(char** bank, int bankSize) {
    int result = 0;
    int len = strlen(bank[0]);
    int num1 = 0;
    int num2 = 0;

    for (int i = 0; i < bankSize; i++) {
        if (!num1) {
            for (int j = 0; j < len; j++)
                num1 += (int)bank[i][j] - '0';
        }
        else if (!num2) {
            for (int j = 0; j < len; j++)
                num2 += (int)bank[i][j] - '0';
        }

        if (num1 && num2) {
            result += num1 * num2;
            num1 = num2;
            num2 = 0;
        }
    }

    return result;
}