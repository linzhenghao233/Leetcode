int cmp(const void* a, const void* b) {
    return *(int*)b - *(int*)a;
}

void wiggleSort(int* nums, int numsSize) {
    int* temp = (int*)malloc(numsSize * sizeof(int));
    int index = 0;

    for (int i = 0; i < numsSize; i++)
        temp[i] = nums[i];
    qsort(temp, numsSize, sizeof(int), cmp);

    for (int i = 1; i < numsSize; i += 2)
        nums[i] = temp[index++];
    for (int i = 0; i < numsSize; i += 2)
        nums[i] = temp[index++];

    free(temp);
}