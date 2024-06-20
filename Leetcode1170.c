/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int cmp(const void* a, const void* b) {
    return *(int*)b - *(int*)a;
}

int f(char* s) {
    int hash[26] = { 0 };

    for (int i = 0; i < strlen(s); i++)
        hash[s[i] - 'a']++;
    for (int i = 0; i < 26; i++) {
        if (hash[i] > 0)
            return hash[i];
    }

    return 0;
}

int* numSmallerByFrequency(char** queries, int queriesSize, char** words, int wordsSize, int* returnSize) {
    int* answer = (int*)calloc(queriesSize, sizeof(int));
    int* temp = (int*)calloc(wordsSize, sizeof(int));

    for (int i = 0; i < wordsSize; i++)
        temp[i] = f(words[i]);

    qsort(temp, wordsSize, sizeof(int), cmp);
    for (int i = 0; i < queriesSize; i++) {
        int left = 0, right = wordsSize - 1;
        int flag = f(queries[i]);
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (flag < temp[mid])
                left = mid + 1;
            else
                right = mid - 1;
        }
        answer[i] = left;
    }
    *returnSize = queriesSize;

    free(temp);
    return answer;
}