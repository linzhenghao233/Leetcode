bool checkIfPangram(char* sentence) {
    int ab[26] = { 0 };
    int flag = 0;
    int len = strlen(sentence);

    for (int i = 0; i < len; i++) {
        if (!ab[(int)sentence[i] - 'a']) {
            flag++;
            if (flag == 26)
                return true;
            ab[(int)sentence[i] - 'a']++;
        }
    }

    return false;
}