

int largestCombination(int* candidates, int candidatesSize) {
    int* hash = (int*)calloc(32, sizeof(int));
    int result = 0;

    for (int i = 0; i < candidatesSize; i++) {
        for (int bit = 0; bit < 32; bit++) {
            if (candidates[i] & (1U << bit))
                hash[bit]++;
        }
    }

    for (int bit = 0; bit < 32; bit++) {
        if (hash[bit] > result)
            result = hash[bit];
    }

    return result;
}