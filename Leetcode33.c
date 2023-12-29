int search(int* nums, int numsSize, int target) {
    int notfound = -1;
    int left, middle, right;
    left = 0, right = numsSize - 1;

    while (left <= right) {
        middle = (left + right) / 2;
        if (nums[middle] == target)
            return middle;
        if (nums[middle] > target && target < nums[right])
            left = middle;
        else if (nums[middle] > target && target > nums[left])
            right = middle;
        else if (nums[middle] < target && target > nums[left])
            right = middle;
        else if (nums[middle] < target && target < nums[right])
            left = middle;
    }
    return notfound;
}//思路是一坨