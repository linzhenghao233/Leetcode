int majorityElement(int* nums, int numsSize) {
    int flag = 1;
    int priority = nums[0];

    if (numsSize == 1)
        return nums[0];

    for (int i = 1; i < numsSize; i++) {
        if (priority == nums[i])
            flag++;
        else
            flag--;
        if (flag == 0) {
            priority = nums[i];
            flag = 1;
        }

    }
    return priority;
}
//Ä¦¶ûÍ¶Æ±·¨