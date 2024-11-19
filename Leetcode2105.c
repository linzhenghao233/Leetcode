int minimumRefill(int* plants, int plantsSize, int capacityA, int capacityB) {
    int result = 0;
    int left = 0;
    int right = plantsSize - 1;
    int fullA = capacityA;
    int fullB = capacityB;

    while (left < right) {
        if (capacityA < plants[left]) {
            result++;
            capacityA = fullA;
        }
        capacityA -= plants[left];
        left++;

        if (capacityB < plants[right]) {
            result++;
            capacityB = fullB;
        }
        capacityB -= plants[right];
        right--;

        if (left == right) {
            if (fmax(capacityA, capacityB) < plants[left])
                result++;
        }
    }

    return result;
}