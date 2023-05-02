char* longestCommonPrefix(char** strs, int strsSize) {
    int i, j, count = -1, end = -1, min = 201;

    for (i = 0; i < strsSize; i++) {
        if (strlen(strs[i]) < min)
            min = strlen(strs[i]);
    }

    for (i = 0; i < min; i++) {
        for (j = 0; j < strsSize - 1; j++) {
            if (strs[j][i] != strs[j + 1][i])
                break;
            else if (j == strsSize - 2)
                count++;
        }
        if (end == count)
            break;
        end = count;
    }
    if (strsSize == 1) {
        char* answer;
        answer = (char*)malloc((min + 1) * sizeof(char));
        answer = strs[0];
        answer[min] = '\0';
        return answer;
    }
    if (count == -1) {
        char* answer;
        answer = (char*)malloc(sizeof(char));
        answer[count + 1] = '\0';
        return answer;
    }
    else {
        char* answer;
        answer = (char*)malloc((count + 2) * sizeof(char));
        for (i = 0; i <= count; i++) {
            answer[i] = strs[0][i];
        }
        answer[count + 1] = '\0';
        return answer;
    }
}