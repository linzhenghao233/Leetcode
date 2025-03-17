bool winnerOfGame(char* colors) {
    int A_index = 0;
    int B_index = 0;
    int len = strlen(colors);
    char flag = 'A';
    int cnt = 0;

    while (A_index < len & B_index < len) {
        if (flag == 'A') {
            if (colors[A_index] == 'A') {
                cnt++;
                if (cnt == 3) {
                    A_index -= 2;
                    cnt = 0;
                    flag = 'B';
                }
            }
            else
                cnt = 0;
            A_index++;
        }
        else {
            if (colors[B_index] == 'B') {
                cnt++;
                if (cnt == 3) {
                    B_index -= 2;
                    cnt = 0;
                    flag = 'A';
                }
            }
            else
                cnt = 0;
            B_index++;
        }
    }

    return flag == 'A' ? false : true;
}