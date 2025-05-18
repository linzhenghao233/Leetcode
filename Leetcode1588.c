/* n2 */
int sumOddLengthSubarrays(int* arr, int arrSize) {
    int result = 0;
    int current = 0;
    int right = 0;

    while (right < arrSize) {
        result += arr[right];
        current += arr[right];
        int temp = current;
        int left = 0;
        int len = right - left + 1;
        while (len > 2) {
            if (len % 2) {
                result += temp;
            }
            temp -= arr[left];
            left++;
            len = right - left + 1;
        }
        right++;
    }

    return result;
}