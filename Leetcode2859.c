int sumIndicesWithKSetBits(int* nums, int numsSize, int k) {
    int result = 0;

    for (int i = 0; i < numsSize; i++) {
        int count = 0;
        int temp = i;

        while (temp) {
            count += (temp & 1);
            temp >>= 1;
        }

        if (count == k)
            result += nums[i];
    }

    return result;
}