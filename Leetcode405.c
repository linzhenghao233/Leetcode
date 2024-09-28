char* toHex(int num) {
    char* result = (char*)malloc(9 * sizeof(char));
    if (num == 0)
        return "0";
    result[8] = '\0';
    int index = 0;

    for (int i = 7; i >= 0; i--) {
        int temp = (num >> (4 * i)) & 0xf;

        if (temp < 10)
            result[index++] = '0' + temp;
        else
            result[index++] = 'a' + temp - 10;
    }
    index = 0;
    while (result[index] == '0')
        index++;

    return result + index;
}