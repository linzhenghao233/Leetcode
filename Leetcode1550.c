bool threeConsecutiveOdds(int* arr, int arrSize) {
    int left = 0;
    int right = 0;

    while (right < arrSize) {
        if (arr[right] % 2) {
            if (right - left + 1 >= 3)
                return true;
        }
        else {
            left = right + 1;
        }
        right++;
    }

    return false;
}