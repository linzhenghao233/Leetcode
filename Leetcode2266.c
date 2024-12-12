int countTexts(char* pressedKeys) {
    int mod = 1000000007;
    int max = 100001;
    long f[100001] = { 0 };
    long g[100001] = { 0 };
    long result = 1;
    int len = strlen(pressedKeys);
    int count = 0;

    f[0] = g[0] = 1;
    f[1] = g[1] = 1;
    f[2] = g[2] = 2;
    f[3] = g[3] = 4;
    for (int i = 4; i < max; i++) {
        f[i] = (f[i - 1] + f[i - 2] + f[i - 3]) % mod;
        g[i] = (g[i - 1] + g[i - 2] + g[i - 3] + g[i - 4]) % mod;
    }

    for (int i = 0; i < len; i++) {
        count++;
        if (i == len - 1 || pressedKeys[i] != pressedKeys[i + 1]) {
            result = result * (pressedKeys[i] != '7' && pressedKeys[i] != '9' ? f[count] : g[count]) % mod;
            count = 0;
        }
    }

    return (int)result;
}