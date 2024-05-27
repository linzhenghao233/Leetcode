

int minFlips(int a, int b, int c) {
    int flag = a ^ b;
    int num = a | b;
    int result = 0;

    for (int i = 0; i < 31; i++) {
        if ((c & 1) != (num & 1)) {
            if (c & 1)
                result++;
            else {
                if (flag & 1)
                    result++;
                else
                    result += 2;
            }
        }
        c >>= 1;
        num >>= 1;
        flag >>= 1;
    }
    return result;
}