

int distanceBetweenBusStops(int* distance, int distanceSize, int start, int destination) {
    int total = 0;
    int part = 0;

    if (start > destination) {
        int temp = start;
        start = destination;
        destination = temp;
    }

    for (int i = 0; i < distanceSize; i++) {
        if (i >= start && i < destination)
            part += distance[i];
        total += distance[i];
    }

    return total - part < part ? total - part : part;
}