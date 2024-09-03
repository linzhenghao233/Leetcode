

char* defangIPaddr(char* address) {
    int len = strlen(address);
    char* result = (char*)malloc((len + 7) * sizeof(char));
    int index = 0;
    int new_index = 0;

    while (address[index]) {
        if (address[index] == '.') {
            result[new_index++] = '[';
            result[new_index++] = '.';
            result[new_index++] = ']';
        }
        else
            result[new_index++] = address[index];
        index++;
    }
    result[new_index] = '\0';

    return result;
}