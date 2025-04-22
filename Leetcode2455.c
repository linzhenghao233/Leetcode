int averageValue(int* nums, int numsSize) {
    int cnt = 0;
    int sum = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 6 == 0) {
            sum += nums[i];
            cnt++;
        }
    }

    return cnt == 0 ? 0 : sum / cnt;
}