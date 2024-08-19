int numJewelsInStones(char* jewels, char* stones) {
    int* hash = (int*)calloc(123, sizeof(int));
    int len = strlen(stones);
    int result = 0;

    for (int i = 0; i < len; i++)
        hash[stones[i]]++;

    len = strlen(jewels);
    for (int i = 0; i < len; i++)
        result += hash[jewels[i]];

    free(hash);
    return result;
}