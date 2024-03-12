int trap(int* height, int heightSize) {
    int max = 0;
    int max_index;
    int left, right;
    int result = 0;

    for (int i = 0; i < heightSize; i++) {
        if (height[i] > max) {
            max = height[i];
            max_index = i;
        }
    }

    left = 0;
    right = left + 1;
    while (right < max_index) {
        while (height[left] > height[right]) {
            result += height[left] - height[right];
            right++;
        }
        left = right;
        right = left + 1;
    }

    right = heightSize - 1;
    left = right - 1;
    while (left > max_index) {
        while (height[right] > height[left]) {
            result += height[right] - height[left];
            left--;
        }
        right = left;
        left = right - 1;
    }

    return result;
}