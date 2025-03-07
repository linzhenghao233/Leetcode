int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int bagOfTokensScore(int* tokens, int tokensSize, int power) {
    int score = 0;
    qsort(tokens, tokensSize, sizeof(int), cmp);
    int left = 0;
    int right = tokensSize - 1;
    int temp = 0;

    while (left <= right) {
        if (power >= tokens[left]) {
            temp++;
            power -= tokens[left];
            left++;
        }
        else if (score > 0) {
            temp--;
            power += tokens[right];
            right--;
        }
        else
            break;

        if (temp > score)
            score = temp;
    }

    return score;
}