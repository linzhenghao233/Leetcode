char* convert(char* s, int numRows) {
    int* position = (int*)malloc((strlen(s) + 1) * sizeof(int));
    char* result = (char*)malloc((strlen(s) + 1) * sizeof(char));
    int temp, turn, loop, num = 0;
    temp = turn = loop = 1;

    while (temp < strlen(s)) {
        if (loop == 1) {
            turn = 1;
            result[num] = s[temp - 1];
            num++;
        }
        if (loop == numRows)
            turn = 0;

        position[temp - 1] = loop;
        (turn == 1) ? loop++ : loop--;
        temp++;
    }

    temp = 1;
    int row = 2;
    while (num != strlen(s)) {
        if (position[temp] == row) {
            result[num] = s[temp];
            num++;
        }
        temp++;
        if (temp == strlen(s)) {
            row++;
            temp = num;
        }
    }
    result[num] = '\0';
    free(position);

    return result;
}