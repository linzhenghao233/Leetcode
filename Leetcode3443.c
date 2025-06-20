int maxDistance(char* s, int k) {
    int len = strlen(s);
    int x = 0;
    int y = 0;
    int result = 0;

    for (int i = 0; i < len; i++) {
        switch (s[i]) {
        case 'E': x += 1; break;
        case 'S': y -= 1; break;
        case 'W': x -= 1; break;
        case 'N': y += 1; break;
        }
        result = fmax(result, fmin(abs(x) + abs(y) + k * 2, i + 1));
    }

    return result;
}