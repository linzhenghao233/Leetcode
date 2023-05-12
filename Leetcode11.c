int maxArea(int* height, int heightSize) {
    int left = 0, right = heightSize - 1, max_S = 0, temp_max_S, temp_height;

    while (left < right) {
        temp_height = height[left] <= height[right] ? height[left] : height[right];
        temp_max_S = (right - left) * temp_height;
        if (temp_max_S > max_S)
            max_S = temp_max_S;
        height[left] <= height[right] ? left++ : right--;
    }
    return max_S;
}