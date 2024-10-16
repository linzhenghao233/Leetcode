int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

double minimumAverage(int* nums, int numsSize) {
    double result = 51.0;
    qsort(nums, numsSize, sizeof(int), cmp);
    int left = 0;
    int right = numsSize - 1;

    while (left < right) {
        double temp = (double)(nums[left] + nums[right]) / 2;
        if (temp < result)
            result = temp;
        left++;
        right--;
    }

    return result;
}