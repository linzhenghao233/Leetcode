//�ÿ����ݸĽ�����ûѧ��
char* subStrHash(char* s, int power, int modulo, int k, int hashValue) {
    char* result = (char*)malloc((k + 1) * sizeof(char));
    int left = 0;
    long long window = 0;
    int count = 0;
    int last = pow(power, k - 1);

    for (int i = 0; i < k; i++) {
        window += ((int)s[i] - 'a' + 1) * pow(power, count);
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
        window /= power;
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