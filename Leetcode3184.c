int countCompleteDayPairs(int* hours, int hoursSize) {
    int hash[24] = { 0 };
    int result = 0;

    for (int i = 0; i < hoursSize; i++) {
        result += hash[hours[i] % 24];
        hash[(24 - hours[i] % 24) % 24]++;
    }

    return result;
}