void sortColors(int* nums, int numsSize) {
    int point, red, blue;
    point = red = 0;
    blue = numsSize - 1;

    while (point <= blue) {
        if (nums[point] == 0) {
            nums[point] = nums[red];
            nums[red] = 0;
            red++;
            point++;
        }
        else if (nums[point] == 2) {
            nums[point] = nums[blue];
            nums[blue] = 2;
            blue--;
        }
        else
            point++;
    }
}