/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int* successfulPairs(int* spells, int spellsSize, int* potions, int potionsSize, long long success, int* returnSize) {
    qsort(potions, potionsSize, sizeof(int), cmp);

    for (int i = 0; i < spellsSize; i++) {
        long long flag = (success + spells[i] - 1) / spells[i];//向上取整
        int left = 0, right = potionsSize - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (potions[mid] >= flag)
                right = mid - 1;
            else
                left = mid + 1;
        }
        spells[i] = potionsSize - left;
    }
    *returnSize = spellsSize;

    return spells;
}