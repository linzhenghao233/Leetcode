int findSpecialInteger(int* arr, int arrSize) {
    if (arrSize == 1)
        return arr[0];
    int flag = arrSize / 4;

    for (int i = 1; i < arrSize; i++) {
        int count = 1;
        while (i < arrSize && arr[i] == arr[i - 1]) {
            i++;
            count++;
        }
        if (count > flag)
            return arr[i - 1];
    }

    return 0;
}