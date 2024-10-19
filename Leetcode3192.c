int minOperations(int* nums, int numsSize) {
    int result = 0;
    int count = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] && count % 2) {
            count++;
            result++;
        }
        else if (!nums[i] && !(count % 2)) {
            count++;
            result++;
        }
    }

    return result;
}
/*
值  次数    结果
1   奇      0
1   偶      1
0   奇      1
0   偶      0
*/