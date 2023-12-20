char* mergeAlternately(char* word1, char* word2) {
    int len1, len2, left, right, i;
    len1 = strlen(word1);
    len2 = strlen(word2);
    left = right = i = 0;
    char* arr = (char*)malloc((len1 + len2 + 1) * sizeof(char));

    while (i < len1 + len2) {
        if (left < len1) {
            arr[i] = word1[left];
            i++;
            left++;
        }
        if (right < len2) {
            arr[i] = word2[right];
            i++;
            right++;
        }
    }
    arr[i] = '\0';

    return arr;
}