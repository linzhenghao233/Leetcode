void nextPermutation(int* nums, int numsSize) {
    int left, right, temp, end;
    right = numsSize - 1;
    temp = -1;
    end = 0;

    while (right < numsSize && right > 0) {
        left = right - 1;
        while (left >= 0) {
            temp = nums[right];
            nums[right] = nums[left];
            nums[left] = temp;
            if (nums[left] > nums[right]) {
                end = 1;
                break;
            }
            left--;
        }
        if (end == 1)
            break;
        right--;
    }
}