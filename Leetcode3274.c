bool checkTwoChessboards(char* coordinate1, char* coordinate2) {
    bool flag1 = ((int)coordinate1[0] - 'a') % 2 == ((int)coordinate1[1] - '1') % 2;
    bool flag2 = ((int)coordinate2[0] - 'a') % 2 == ((int)coordinate2[1] - '1') % 2;

    return flag1 == flag2 ? true : false;
}