int numberOfAlternatingGroups(int* colors, int colorsSize) {
    int result = 0;

    for (int i = 0; i < colorsSize; i++) {
        if (colors[i] != colors[(i - 1 + colorsSize) % colorsSize] && colors[i] != colors[(i + 1) % colorsSize])
            result++;
    }

    return result;
}