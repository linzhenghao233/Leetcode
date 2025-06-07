int sumOfEncryptedInt(int* nums, int numsSize) {
    int result = 0;

    for (int i = 0; i < numsSize; i++) {
        int max = 0;
        int num = nums[i];
        int cnt = 0;
        while (num) {
            int temp = num % 10;
            if (temp > max)
                max = temp;
            cnt++;
            num /= 10;
        }
        num = 0;
        while (cnt) {
            num *= 10;
            num += max;
            cnt--;
        }
        result += num;
    }

    return result;
}