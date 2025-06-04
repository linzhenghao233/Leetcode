int CtoN(char* str) {
    int len = strlen(str);
    int num = 0;

    for (int i = 0; i < len; i++) {
        num *= 10;
        num += (int)str[i] - 'a';
    }

    return num;
}

bool isSumEqual(char* firstWord, char* secondWord, char* targetWord) {
    int a = CtoN(firstWord);
    int b = CtoN(secondWord);
    int c = CtoN(targetWord);

    return a + b == c;
}