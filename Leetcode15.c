/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    int left = 0, right = numsSize - 1, row = 0, target;
    int** arr = (int**)malloc(1000 * sizeof(int*));

    while (left < right) {
        target = -(nums[left] + nums[right]);
        int i = left + 1;
        while (i < right) {
            if (nums[i] == target) {
                arr[row] = (int*)malloc(3 * sizeof(int));
                arr[row][0] = nums[left];
                arr[row][1] = nums[i];
                arr[row][2] = nums[right];
                row++;
                break;
            }
            i++;
        }
        left++;
        right--;
    }
    *returnSize = row;
    *returnColumnSizes = (int*)malloc(row * sizeof(int));
    for (int i = 0; i < row; i++) {
        (*returnColumnSizes)[i] = 3;
    }

    return arr;
}