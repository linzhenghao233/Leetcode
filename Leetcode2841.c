//≥¨ ±¡À
long long maxSum(int* nums, int numsSize, int m, int k) {
    long long result = 0;
    long long window = 0;
    int flag = 0;
    int* temp = (int*)calloc(k, sizeof(int));

    for (int n = 0; n < numsSize; n++) {
        memset(temp, 0, sizeof(int) * k);
        for (int i = n; i < n + k && i < numsSize; i++) {
            for (int j = 0; j < m; j++) {
                if (nums[i] == temp[j])
                    break;
                if (temp[j] == 0) {
                    temp[j] = nums[i];
                    flag++;
                    break;
                }
            }
            window += nums[i];
        }
        if (flag >= m && window > result)
            result = window;
        flag = 0;
        window = 0;
    }
    free(temp);
    return result;
}