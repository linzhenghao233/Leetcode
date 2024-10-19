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
ֵ  ����    ���
1   ��      0
1   ż      1
0   ��      1
0   ż      0
*/