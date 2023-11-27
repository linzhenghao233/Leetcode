/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    int left, middle, right, row = 0, target;
    int** arr = (int**)malloc(numsSize * numsSize / 6 * sizeof(int*));

    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = 0; j < numsSize - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }

    for (left = 0; left + 2 < numsSize; left++) {
        if (left > 0 && nums[left] == nums[left - 1])
            continue;

        middle = left + 1;
        right = numsSize - 1;
        while (middle < right) {
            target = nums[left] + nums[middle] + nums[right];
            if (target == 0) {
                arr[row] = (int*)malloc(3 * sizeof(int));
                arr[row][0] = nums[left];
                arr[row][1] = nums[middle];
                arr[row][2] = nums[right];
                row++;

                while (middle < right && nums[middle + 1] == nums[middle])
                    middle++;
                while (middle < right && nums[right - 1] == nums[right])
                    right--;
                middle++;
                right--;
            }
            else if (target > 0)
                right--;
            else
                middle++;
        }
        *returnSize = row;
        *returnColumnSizes = (int*)malloc(row * sizeof(int));
        for (int i = 0; i < row; i++) {
            (*returnColumnSizes)[i] = 3;
        }
    }
    return arr;
}

//ÔËÐÐÄÚ´æ400m£¨- _ -£©