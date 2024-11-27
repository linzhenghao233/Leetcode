int numberOfAlternatingGroups(int* colors, int colorsSize, int k) {
    int result = 0;
    int dp = 1;

    for (int i = 1; i < colorsSize + k - 1; i++) {
        if (colors[i % colorsSize] != colors[(i - 1) % colorsSize]) {
            dp += 1;
            if (dp >= k)
                result++;
        }
        else
            dp = 1;
    }

    return result;
}