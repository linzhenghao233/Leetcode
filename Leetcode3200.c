int maxHeightOfTriangle(int red, int blue) {
    int result = -1;
    int temp_red = red;
    int temp_blue = blue;
    int flag = 1;
    int row = 1;
    int result02 = -1;

    while (temp_red >= 0 && temp_blue >= 0) {
        result++;
        if (flag) {
            temp_blue -= row;
            flag--;
        }
        else {
            temp_red -= row;
            flag++;
        }
        row++;
    }

    flag = 1;
    row = 1;
    while (red >= 0 && blue >= 0) {
        result02++;
        if (flag) {
            red -= row;
            flag--;
        }
        else {
            blue -= row;
            flag++;
        }
        row++;
    }

    return result > result02 ? result : result02;
}