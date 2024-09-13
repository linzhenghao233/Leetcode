int func(int num) {
    int count = 0;

    while (num) {
        count++;
        num /= 10;
    }

    return count;
}

int findNumbers(int* nums, int numsSize) {
    int result = 0;

    for (int i = 0; i < numsSize; i++) {
        if (func(nums[i]) % 2 == 0)
            result++;
    }

    return result;
}