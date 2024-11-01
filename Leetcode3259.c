long long maxEnergyBoost(int* energyDrinkA, int energyDrinkASize, int* energyDrinkB, int energyDrinkBSize) {
    long long* arrA = (long long*)calloc(energyDrinkASize + 2, sizeof(long long));
    long long* arrB = (long long*)calloc(energyDrinkASize + 2, sizeof(long long));

    for (int i = 0; i < energyDrinkASize; i++) {
        arrA[i + 2] = fmax(arrA[i + 1], arrB[i]) + energyDrinkA[i];
        arrB[i + 2] = fmax(arrB[i + 1], arrA[i]) + energyDrinkB[i];
    }
    long long result = fmax(arrA[energyDrinkASize + 1], arrB[energyDrinkBSize + 1]);

    free(arrA);
    free(arrB);
    return result;
}