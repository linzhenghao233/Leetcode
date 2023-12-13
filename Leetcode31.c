void nextPermutation(int* nums, int numsSize) {
    int left, right, temp, end, min, move;
    left = numsSize - 2;
    min = 101;
    end = 0;

    while (left >= 0) {
        right = left + 1;
        while (right < numsSize) {
            if (nums[right] > nums[left] && nums[right] < min) {
                min = nums[right];
                move = right;
            }
            right++;
        }
        if (min != 101) {
            temp = nums[left];
            nums[left] = nums[move];
            nums[move] = temp;
            left++;
            right = numsSize - 1;
            while (left < right) {
                temp = nums[left];
                nums[left++] = nums[right];
                nums[right--] = temp;
            }
            break;
        }
        left--;
    }
    if (min == 101) {
        left = 0;
        right = numsSize - 1;
        while (left < right) {
            temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
        }
    }
}