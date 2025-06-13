int countValidSelections(int* nums, int numsSize) {
    int tail = 0;
    int head = 0;
    int result = 0;

    for (int i = 0; i < numsSize; i++) {
        tail += nums[i];
    }

    for (int i = 0; i < numsSize; i++) {
        head += nums[i];
        tail -= nums[i];
        int flag = abs(head - tail);
        if (!nums[i] && flag < 2) {
            result += flag == 0 ? 2 : 1;
        }
    }

    return result;
}