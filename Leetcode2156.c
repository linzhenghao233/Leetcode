long long fast_pow_mod(long long power, int exponent, int modulo) {
    long long result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1)
            result = (result * power) % modulo;
        power = (power * power) % modulo;
        exponent >>= 1;
    }
    return result;
}

char* subStrHash(char* s, int power, int modulo, int k, int hashValue) {
    char* result = (char*)malloc((k + 1) * sizeof(char));
    int left = 0;
    long long window = 0;
    int count = 0;
    long long last = fast_pow_mod(power, k - 1, modulo);

    for (int i = 0; i < k; i++) {
        window = window + ((int)s[i] - 'a' + 1) * fast_pow_mod(power, count, modulo);
        count++;
    }
    if (window % modulo == hashValue) {
        for (int i = 0; i < k; i++)
            result[i] = s[i];
        result[k] = '\0';
        return result;
    }

    for (int i = k; i < strlen(s); i++) {
        window -= (int)s[i - k] - 'a' + 1;
        window /= power;    //此处出现了问题，但是没想出办法
        window += ((int)s[i] - 'a' + 1) * last;
        if (window % modulo == hashValue) {
            left = i - k + 1;
            for (int j = left; j < k + left; j++)
                result[j - left] = s[j];
            result[k] = '\0';
            return result;
        }
    }
    return NULL;
}