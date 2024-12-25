int cmp(const void* a, const void* b) {
    return *(int*)b - *(int*)a;
}

int minimumCost(int m, int n, int* horizontalCut, int horizontalCutSize, int* verticalCut, int verticalCutSize) {
    int row_cnt = 1;
    int col_cnt = 1;
    int result = 0;
    qsort(horizontalCut, horizontalCutSize, sizeof(int), cmp);
    qsort(verticalCut, verticalCutSize, sizeof(int), cmp);
    int hor_index = 0;
    int ver_index = 0;

    while (hor_index < horizontalCutSize || ver_index < verticalCutSize) {
        if (hor_index >= horizontalCutSize) {
            result += verticalCut[ver_index] * row_cnt;
            col_cnt += 1;
            ver_index += 1;
        }
        else if (ver_index >= verticalCutSize) {
            result += horizontalCut[hor_index] * col_cnt;
            row_cnt += 1;
            hor_index += 1;
        }
        else if (horizontalCut[hor_index] > verticalCut[ver_index]) {
            result += horizontalCut[hor_index] * col_cnt;
            row_cnt += 1;
            hor_index += 1;
        }
        else {
            result += verticalCut[ver_index] * row_cnt;
            col_cnt += 1;
            ver_index += 1;
        }
    }

    return result;
}