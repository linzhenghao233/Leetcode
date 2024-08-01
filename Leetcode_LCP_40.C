int cmp(const void* a, const void* b) {
    return *(int*)b - *(int*)a;
}

int maxmiumScore(int* cards, int cardsSize, int cnt) {
    int result = 0;
    qsort(cards, cardsSize, sizeof(int), cmp);
    int odd_min = INT_MAX;
    int even_min = INT_MAX;

    for (int i = 0; i < cnt; i++) {
        result += cards[i];
        if (cards[i] & 1 && cards[i] < odd_min)
            odd_min = cards[i];
        else if (!(cards[i] & 1) && cards[i] < even_min)
            even_min = cards[i];
    }

    if ((result & 1) == 0)
        return result;

    int num1 = result, num2 = result;
    for (int i = cnt; i < cardsSize; i++) {
        if ((cards[i] & 1) == 0 && odd_min != INT_MAX) {
            num1 += cards[i] - odd_min;
            break;
        }
    }
    for (int i = cnt; i < cardsSize; i++) {
        if (cards[i] & 1 && even_min != INT_MAX) {
            num2 += cards[i] - even_min;
            break;
        }
    }

    if (!(num1 & 1) && !(num2 & 1))
        return num1 > num2 ? num1 : num2;
    else if (!(num1 & 1))
        return num1;
    else if (!(num2 & 1))
        return num2;
    return 0;
}