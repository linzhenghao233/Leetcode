bool checkStraightLine(int** coordinates, int coordinatesSize, int* coordinatesColSize) {
    if (coordinates[1][0] - coordinates[0][0] == 0) {
        for (int i = 0; i < coordinatesSize; i++) {
            if (coordinates[i][0] != coordinates[0][0])
                return false;
        }
        return true;
    }

    float k = (float)(coordinates[1][1] - coordinates[0][1]) / (coordinates[1][0] - coordinates[0][0]);

    for (int i = 1; i < coordinatesSize; i++) {
        if (coordinates[i][0] - coordinates[i - 1][0] == 0)
            return false;
        if ((float)(coordinates[i][1] - coordinates[i - 1][1]) / (coordinates[i][0] - coordinates[i - 1][0]) != k)
            return false;
    }
    return true;
}