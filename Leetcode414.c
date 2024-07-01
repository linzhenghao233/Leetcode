

int thirdMax(int* nums, int numsSize) {
    long a, b, c;
    a = b = c = LONG_MIN;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > a) {
            c = b;
            b = a;
            a = nums[i];
        }
        else if (nums[i] > b && nums[i] < a) {
            c = b;
            b = nums[i];
        }
        else if (nums[i] > c && nums[i] < b)
            c = nums[i];
    }

    return c == LONG_MIN ? a : c;
}