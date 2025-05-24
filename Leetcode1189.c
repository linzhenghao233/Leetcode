int maxNumberOfBalloons(char* text) {
    int cnt[(int)'z' + 1] = { 0 };
    int len = strlen(text);

    for (int i = 0; i < len; i++) {
        cnt[(int)text[i]]++;
    }

    return fmin(cnt[(int)'b'], fmin(cnt[(int)'a'], fmin(cnt[(int)'l'] >> 1, fmin(cnt[(int)'o'] >> 1, cnt[(int)'n']))));
}