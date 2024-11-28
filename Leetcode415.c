char* addStrings(char* num1, char* num2) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int len = len1 > len2 ? len1 : len2;
    char* result = (char*)malloc((len + 2) * sizeof(char));
    result[len + 1] = '\0';
    int add = 0;
    len1 -= 1;
    len2 -= 1;

    while (len1 >= 0 || len2 >= 0 || add) {
        int temp = 0;
        if (len1 >= 0 && len2 >= 0) {
            temp = (int)num1[len1] - '0' + num2[len2] - '0' + add;
            len1--;
            len2--;
        }
        else if (len1 >= 0) {
            temp = (int)num1[len1] - '0' + add;
            len1--;
        }
        else if (len2 >= 0) {
            temp = (int)num2[len2] - '0' + add;
            len2--;
        }
        else
            temp = 1;
        result[len] = '0' + (temp % 10);
        len--;
        add = temp / 10;
    }

    return result + 1 + len;
}