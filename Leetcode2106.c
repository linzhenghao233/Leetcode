int maxTotalFruits(int** fruits, int fruitsSize, int* fruitsColSize, int startPos, int k) {
    int left, right;
    int result = 0;
    int* hash = (int*)calloc(2 * 10e5, sizeof(int));
    int temp;
    left = fmax(startPos - k, 0);
    right = fmax(startPos, startPos + (k - startPos) / 2);

    for (int i = 0; i < fruitsSize; i++)
        hash[fruits[i][0]] = fruits[i][1];

    for (int i = left; i < right; i++)
        result += hash[i];

    temp = result;
    while (right <= fruits[fruitsSize - 1][0] && left <= startPos) {
        int add = fmin(startPos - left, right - startPos);
        temp += hash[right];
        result = fmax(result, temp);
        while (right - left + add + 1 > k) {
            temp -= hash[left];
            left++;
        }
        right++;
    }
    free(hash);
    return result;
}