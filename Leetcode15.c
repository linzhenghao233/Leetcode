/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    int left = 0, right = 1, row = 0;
    int** arr = (int**)malloc(3000 * sizeof(int*));

    for (int i = 2; i < numsSize; i++) {
        for (int j = right + 1; j < numsSize; j++) {
            if (nums[left] + nums[right] + nums[j] == 0) {
                arr[row] = (int*)malloc(3 * sizeof(int));
                arr[row][0] = nums[left];
                arr[row][1] = nums[right];
                arr[row][2] = nums[j];
                row++;
                returnSize = row + 1;
                returnColumnSizes = 3;
                left++;
                right++;
                break;
            }
            if (j + 1 == numsSize) {
                left++;
                right++;
            }
        }
    }
    return arr;
}