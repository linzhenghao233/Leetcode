int countElements(int* nums, int numsSize) {
    int max = INT_MIN;
    int min = INT_MAX;
    int cnt_max = 0;
    int cnt_min = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] < min) {
            cnt_min = 1;
            min = nums[i];
        }
        else if (nums[i] == min) {
            cnt_min++;
        }
        if (nums[i] > max) {
            cnt_max = 1;
            max = nums[i];
        }
        else if (nums[i] == max) {
            cnt_max++;
        }
    }
    if (max == min)
        return 0;

    return numsSize - cnt_max - cnt_min;
}