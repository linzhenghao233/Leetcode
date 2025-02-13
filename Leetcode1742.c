int countBalls(int lowLimit, int highLimit) {
    int result = 0;
    int count[46] = { 0 };

    for (int i = lowLimit; i <= highLimit; i++) {
        int temp = 0;
        int flag = i;
        while (flag) {
            temp += flag % 10;
            flag /= 10;
        }
        count[temp] += 1;
        if (count[temp] > result)
            result = count[temp];
    }

    return result;
}