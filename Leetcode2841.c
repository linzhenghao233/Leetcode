//超时了
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


//25/3/3通过了
long long maxSum(int* nums, int numsSize, int m, int k) {
    long long result = 0;
    long long cur = 0;
    int count[20001][2] = { 0 };
    int diff_cnt = 0;
    int index = 0;

    for (int i = 0; i < numsSize; i++) {
        int flag = 0;
        for (int j = 0; j < index; j++) {
            if (count[j][0] == nums[i]) {
                count[j][1]++;
                flag = 1;
                break;
            }
        }

        if (!flag) {
            count[index][0] = nums[i];
            count[index][1] = 1;
            index++;
            diff_cnt++;
        }
        cur += nums[i];

        if (i >= k) {
            cur -= nums[i - k];
            for (int j = 0; j < index; j++) {
                if (count[j][0] == nums[i - k]) {
                    count[j][1]--;
                    if (count[j][1] == 0) {
                        diff_cnt--;
                        count[j][0] = count[index - 1][0];
                        count[j][1] = count[index - 1][1];
                        index--;
                    }
                    break;
                }
            }
        }
        if (i >= k - 1 && diff_cnt >= m) {
            if (cur > result)
                result = cur;
        }
    }

    return result;
}