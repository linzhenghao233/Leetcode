double average(int* salary, int salarySize) {
    int max = 0;
    int min = 1000001;
    double sum = 0;

    for (int i = 0; i < salarySize; i++) {
        if (salary[i] > max)
            max = salary[i];
        if (salary[i] < min)
            min = salary[i];
        sum += salary[i];
    }

    return (sum - min - max) / (salarySize - 2);
}