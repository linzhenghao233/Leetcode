char* decodeMessage(char* key, char* message) {
    int exist[26] = { 0 };
    char alphabet[27];
    int index = 0;
    int len = strlen(key);

    for (int i = 0; i < len; i++) {
        if (key[i] == ' ' || exist[(int)key[i] - 'a'])
            continue;

        exist[(int)key[i] - 'a'] = 1;
        alphabet[(int)key[i] - 'a'] = 'a' + index;
        index++;
    }

    len = strlen(message);
    for (int i = 0; i < len; i++) {
        if (message[i] == ' ')
            continue;

        message[i] = alphabet[(int)message[i] - 'a'];
    }

    return message;
}