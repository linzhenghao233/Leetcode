int Partition(int* arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

void QuickSort(int* arr, int low, int high) {
    if (low < high) {
        int pi = Partition(arr, low, high);
        QuickSort(arr, low, pi - 1);
        QuickSort(arr, pi + 1, high);
    }
}

int threeSumClosest(int* nums, int numsSize, int target) {
    int sum, left, middle, right, diff, result;
    left = 0;
    diff = 100000;

    QuickSort(nums, 0, numsSize - 1);
    while (left < numsSize - 2) {
        middle = left + 1;
        right = numsSize - 1;
        while (middle < right) {
            sum = nums[left] + nums[middle] + nums[right];
            if (abs(sum - target) < diff) {
                diff = abs(sum - target);
                result = sum;
            }
            if (sum == target)
                return target;
            else if (sum < target)
                middle++;
            else
                right--;
        }
        left++;
    }
    return result;
}