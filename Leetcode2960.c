int countTestedDevices(int* batteryPercentages, int batteryPercentagesSize) {
    int result = 0;

    for (int i = 0; i < batteryPercentagesSize; i++) {
        if (batteryPercentages[i] - result > 0)
            result++;
    }

    return result;
}