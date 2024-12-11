int semiOrderedPermutation(int* nums, int numsSize) {
    int index_min, index_max;
    int result;
    index_min = index_max = result = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == 1)
            index_min = i;
        else if (nums[i] == numsSize)
            index_max = i;

        if (index_min && index_max)
            break;
    }

    if (index_min > index_max)
        result -= 1;

    return result + index_min - 0 + numsSize - 1 - index_max;
}