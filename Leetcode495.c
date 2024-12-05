int findPoisonedDuration(int* timeSeries, int timeSeriesSize, int duration) {
    int result = 0;

    for (int i = 0; i < timeSeriesSize - 1; i++) {
        if (timeSeries[i] + duration >= timeSeries[i + 1])
            result += timeSeries[i + 1] - timeSeries[i];
        else
            result += duration;
    }

    return result + duration;
}