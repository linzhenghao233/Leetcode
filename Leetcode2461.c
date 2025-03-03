//卡住了没思路

long long maximumSubarraySum(int* nums, int numsSize, int k) {
    int* window = (int*)calloc(100001, sizeof(int));
    int* position = (int*)calloc(100001, sizeof(int));
    long long result = 0;
    long long sum = 0;

    for (int i = 1; i <= i + k && i <= numsSize; i++) {
        if (nums[i] == 1) {
            for (int j = 1; j <= position[nums[i]]; j++) {
                window[sum[j]] = 0;
                position[sum[j]] = 0;
            }
            sum = 0;
            position[nums[i]] = i;
            i = position[nums[i]] + 1;
            memset(window, 0, sizeof(window));
        }
        else {
            sum += nums[i];
            window[num[i]] = 1;
            position[nums[i]] = i;
        }
    }
    if (sum > result)
        result = sum;

    for (int i = k; i < numsSize; i++) {
        if (nums[i] != 1) {
            sum += nums[i] - nums[i - k];

        }
    }
}

//做出来了25/3/3
long long maximumSubarraySum(int* nums, int numsSize, int k) {
    int count[100001] = { 0 };
    long long result = 0;
    long long temp = 0;
    int left = 0;
    int right = 0;

    while (right < numsSize) {
        count[nums[right]] += 1;
        temp += nums[right];
        while (count[nums[right]] > 1) {
            count[nums[left]] -= 1;
            temp -= nums[left];
            left += 1;
        }
        if (right - left + 1 > k) {
            count[nums[left]] -= 1;
            temp -= nums[left];
            left += 1;
        }
        if (right - left + 1 == k && temp > result)
            result = temp;
        right += 1;
    }

    return result;
}