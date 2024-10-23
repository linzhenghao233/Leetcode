long long countCompleteDayPairs(int* hours, int hoursSize) {
    long long result = 0;
    int hash[24] = { 0 };

    for (int i = 0; i < hoursSize; i++) {
        result += hash[hours[i] % 24];
        hash[(24 - hours[i] % 24) % 24]++;
    }

    return result;
}