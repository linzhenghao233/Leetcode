bool squareIsWhite(char* coordinates) {
    int color1 = ((int)coordinates[0] - 'a') & 1;
    int color2 = ((int)coordinates[1] - '1') & 1;

    return color1 == color2 ? false : true;
}