int getMinDistance(int* nums, int numsSize, int target, int start) {
    int result = INT_MAX;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == target) {
            int temp = abs(i - start);
            result = temp < result ? temp : result;
        }
    }

    return result;
}