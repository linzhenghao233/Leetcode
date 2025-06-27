char* reversePrefix(char* word, char ch) {
    int len = strlen(word);

    for (int i = 0; i < len; i++) {
        if (word[i] == ch) {
            int left = 0;
            int right = i;

            while (left < right) {
                char temp = word[left];
                word[left] = word[right];
                word[right] = temp;
                left++;
                right--;
            }
            break;
        }
    }

    return word;
}