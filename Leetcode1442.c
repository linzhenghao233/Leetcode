

int countTriplets(int* arr, int arrSize) {
    int result = 0;

    for (int i = 0; i < arrSize - 1; i++) {
        int temp = 0;
        for (int k = i; k < arrSize; k++) {
            temp ^= arr[k];
            if (!temp && k > i)
                result += k - i;
        }
    }

    return result;
}