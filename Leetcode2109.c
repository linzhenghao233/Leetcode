char* addSpaces(char* s, int* spaces, int spacesSize) {
    int len = strlen(s);
    char* result = (char*)malloc((len + spacesSize + 1) * sizeof(char));
    int index = 0;
    int spa_index = 0;

    for (int i = 0; i < len; i++) {
        if (spa_index < spacesSize && i == spaces[spa_index]) {
            result[index] = ' ';
            spa_index++;
            i--;
        }
        else {
            result[index] = s[i];
        }
        index++;
    }

    result[index] = '\0';
    return result;
}