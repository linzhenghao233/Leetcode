int removeDuplicates(int* nums, int numsSize) {
    int blank, search, temp, count;
    search = temp = 1;
    count = 0;

    if (numsSize == 1)
        return numsSize;

    while (search < numsSize) {
        while (nums[search] == nums[search - 1]) {
            if (temp == 1) {
                blank = search;
                temp = 0;
            }
            search++;
            count++;
        }
        if (search < numsSize)
            nums[blank] = nums[search];
        temp = 1;
    }
    return numsSize - count;
}