char* intToRoman(int num) {
    char* ch;
    int index, i;
    ch = (char*)malloc(20 * sizeof(char));
    index = 0;


    if ((i = num / 1000) > 0) {
        num -= i * 1000;
        while (i--)
            ch[index++] = 'M';
    }
    if (num / 900) {
        num -= 900;
        ch[index++] = 'C';
        ch[index++] = 'M';
    }
    if (num / 500) {
        num -= 500;
        ch[index++] = 'D';
    }
    if (num / 400) {
        num -= 400;
        ch[index++] = 'C';
        ch[index++] = 'D';
    }
    if ((i = num / 100) > 0) {
        num -= i * 100;
        while (i--)
            ch[index++] = 'C';
    }
    if (num / 90) {
        num -= 90;
        ch[index++] = 'X';
        ch[index++] = 'C';
    }
    if (num / 50) {
        num -= 50;
        ch[index++] = 'L';
    }
    if (num / 40) {
        num -= 40;
        ch[index++] = 'X';
        ch[index++] = 'L';
    }
    if ((i = num / 10) > 0) {
        num -= i * 10;
        while (i--)
            ch[index++] = 'X';
    }
    if (num / 9) {
        num -= 9;
        ch[index++] = 'I';
        ch[index++] = 'X';
    }
    if (num / 5) {
        num -= 5;
        ch[index++] = 'V';
    }
    if (num / 4) {
        num -= 4;
        ch[index++] = 'I';
        ch[index++] = 'V';
    }
    if ((i = num / 1) > 0) {
        while (i--)
            ch[index++] = 'I';
    }
    ch[index] = '\0';
    return ch;
}