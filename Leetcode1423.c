int maxScore(int* cardPoints, int cardPointsSize, int k) {
    int result = 0;
    int window = 0;
    int min;
    int i;

    for (i = 0; i < cardPointsSize; i++)
        result += cardPoints[i];

    for (i = 0; i < cardPointsSize - k; i++)
        window += cardPoints[i];
    min = window;

    for (; i < cardPointsSize; i++) {
        window += cardPoints[i] - cardPoints[i - cardPointsSize + k];
        if (window < min)
            min = window;
    }
    return result - min;
}