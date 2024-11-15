int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int minMovesToSeat(int* seats, int seatsSize, int* students, int studentsSize) {
    qsort(seats, seatsSize, sizeof(int), cmp);
    qsort(students, studentsSize, sizeof(int), cmp);
    int result = 0;

    for (int i = 0; i < seatsSize; i++)
        result += abs(seats[i] - students[i]);

    return result;
}