int jewelleryValue(int** frame, int frameSize, int* frameColSize) {
    int* f = (int*)calloc(*frameColSize + 1, sizeof(int));

    for (int row = 0; row < frameSize; row++) {
        for (int col = 0; col < *frameColSize; col++)
            f[col + 1] = fmax(f[col], f[col + 1]) + frame[row][col];
    }

    return f[*frameColSize];
}