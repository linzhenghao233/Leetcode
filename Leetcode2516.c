int takeCharacters(char* s, int k) {
    int* count = (int*)calloc(3, sizeof(int));
    int result;
    int left, right;
    int len = strlen(s);
    result = left = right = 0;

    for (int i = 0; i < len; i++) {
        switch (s[i]) {
        case 'a':
            count[0]++;
            break;
        case 'b':
            count[1]++;
            break;
        case 'c':
            count[2]++;
        }
    }
    if (count[0] < k || count[1] < k || count[2] < k)
        return -1;

    while (right < len) {
        switch (s[right]) {
        case 'a':
            count[0]--;
            break;
        case 'b':
            count[1]--;
            break;
        case 'c':
            count[2]--;
        }
        while (count[0] < k || count[1] < k || count[2] < k) {
            switch (s[left]) {
            case 'a':
                count[0]++;
                break;
            case 'b':
                count[1]++;
                break;
            case 'c':
                count[2]++;
            }
            left++;
        }
        result = fmax(right - left + 1, result);
        right++;
    }
    return len - result;
}