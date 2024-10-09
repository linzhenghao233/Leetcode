/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    bool* result = (bool*)malloc(candiesSize * sizeof(bool));
    int flag = 0;

    for (int i = 0; i < candiesSize; i++) {
        if (candies[i] > flag)
            flag = candies[i];
    }

    for (int i = 0; i < candiesSize; i++) {
        if (candies[i] + extraCandies >= flag)
            result[i] = true;
        else
            result[i] = false;
    }

    *returnSize = candiesSize;
    return result;
}