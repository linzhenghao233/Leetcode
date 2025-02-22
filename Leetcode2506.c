int similarPairs(char** words, int wordsSize) {
    int bit1 = 0, bit2 = 0;
    int len = 0;
    int num = 0;

    for (int i = 0; i < wordsSize - 1; i++) {
        bit1 = 0;
        len = strlen(words[i]);

        for (int j = 0; j < len; j++)
            bit1 |= 1 << (words[i][j] - 'a');

        for (int j = i + 1; j < wordsSize; j++) {
            bit2 = 0;
            len = strlen(words[j]);
            for (int k = 0; k < len; k++)
                bit2 |= 1 << (words[j][k] - 'a');
            if ((bit1 ^ bit2) == 0)
                num++;
        }
    }

    return num;
}