int isPrefixOfWord(char* sentence, char* searchWord) {
    int count = 1;
    int i = 0;
    int len1 = strlen(sentence);
    int len2 = strlen(searchWord);

    while (i < len1) {
        if (sentence[i] == ' ') {
            count++;
            i++;
        }

        int j = 0;
        while (i < len1 && j < len2 && sentence[i] == searchWord[j]) {
            i++;
            j++;
        }
        if (j == len2)
            return count;

        while (i < len1 && sentence[i] != ' ')
            i++;
    }

    return -1;
}