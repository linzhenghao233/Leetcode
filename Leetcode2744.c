int maximumNumberOfStringPairs(char** words, int wordsSize) {
    int result = 0;

    for (int i = 0; i < wordsSize; i++) {
        for (int j = i + 1; j < wordsSize; j++) {
            if (words[i][0] == words[j][1] && words[i][1] == words[j][0]) {
                result++;
                break;
            }
        }
    }

    return result;
}