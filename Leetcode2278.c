int percentageLetter(char* s, char letter) {
    int num1 = 0;
    int num2 = 0;
    int len = strlen(s);

    while (num2 < len) {
        if (s[num2] == letter)
            num1++;
        num2++;
    }

    return num1 * 100 / num2;
}