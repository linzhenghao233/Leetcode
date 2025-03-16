int longestMountain(int* arr, int arrSize) {
    if (arrSize < 3)
        return 0;
    int max = 0;
    int up = 0;

    for (int i = 1; i < arrSize; i++) {
        if (arr[i] > arr[i - 1]) {
            up++;
        }
        else if (arr[i] == arr[i - 1]) {
            up = 0;
        }
        else {
            if (up > 0) {
                int down = 0;
                int j;
                for (j = i; j < arrSize; j++) {
                    if (arr[j] < arr[j - 1])
                        down++;
                    else
                        break;
                }
                if (down > 0) {
                    int temp = up + down + 1;
                    max = temp > max ? temp : max;
                }
                i = j - 1;
            }
            up = 0;
        }
    }

    return max;
}