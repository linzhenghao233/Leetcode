

char* interpret(char* command) {
    int len = strlen(command);
    char* result = (char*)calloc(len + 1, sizeof(char));
    int index = 0;

    for (int i = 0; i < len; i++) {
        if (command[i] == 'G')
            result[index++] = 'G';
        else if (command[i] == '(') {
            if (command[i + 1] == ')') {
                result[index++] = 'o';
                i++;
            }
            else {
                result[index++] = 'a';
                result[index++] = 'l';
                i += 3;
            }
        }
    }

    return result;
}