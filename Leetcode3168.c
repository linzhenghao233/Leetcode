int minimumChairs(char* s) {
    int result = 0;
    int temp = 0;
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        if (s[i] == 'E')
            temp++;
        else
            temp--;

        if (temp > result)
            result = temp;
    }

    return result;
}