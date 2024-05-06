int totalFruit(int* fruits, int fruitsSize) {
    int result = 0;
    int temp = 0;
    int left, right;
    int num1, num2;
    left = right = 0;
    num1 = num2 = -1;

    if (fruitsSize <= 2)
        return fruitsSize;

    while (right < fruitsSize) {
        if (num1 == -1) {
            num1 = fruits[left];
            while (right < fruitsSize && fruits[right] == num1)
                right++;
            if (right < fruitsSize)
                num2 = fruits[right];
            else
                right--;
            temp = right - left + 1;
            if (temp > result)
                result = temp;
            right++;
            continue;
        }
        if (fruits[right] != num1 && fruits[right] != num2) {
            num2 = fruits[right];
            left = right - 1;
            num1 = fruits[left];
            while (left >= 0 && fruits[left] == num1)
                left--;
            left++;
        }
        temp = right - left + 1;
        if (temp > result)
            result = temp;
        right++;
    }
    return result;
}