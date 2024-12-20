int rob1(int* nums, int start, int end) {
    int f0, f1;
    f0 = f1 = 0;
    for (int i = start; i < end; i++) {
        int f = fmax(f1, f0 + nums[i]);
        f0 = f1;
        f1 = f;
    }

    return f1;
}

int rob(int* nums, int numsSize) {
    int choose0 = nums[0] + rob1(nums, 2, numsSize - 1);
    int not_choose0 = rob1(nums, 1, numsSize);

    return fmax(choose0, not_choose0);
}