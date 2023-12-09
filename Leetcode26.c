int removeDuplicates(int* nums, int numsSize) {
    int blank, search;
    search = 1;
    blank = 0;

    if (numsSize == 1)
        return numsSize;

    while (search < numsSize) {
        if (nums[search] > nums[blank]) {
            blank++;
            nums[blank] = nums[search];
        }
        search++;
        while (search < numsSize && nums[search] == nums[search - 1])
            search++;
    }
    return blank + 1;
}