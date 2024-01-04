void rotate(int* nums, int numsSize, int k) {
    int tail = k % numsSize;
    int tail_index = tail - 1;
    int flag = numsSize - tail - 1;
    int* temp = (int*)malloc(tail * sizeof(int));

    for (int i = numsSize - 1; i > flag; i--, tail_index--)
        temp[tail_index] = nums[i];
    for (int i = flag, j = numsSize - 1; i >= 0; i--, j--)
        nums[j] = nums[i];
    for (int i = 0; i < tail; i++)
        nums[i] = temp[i];
    free(temp);
}