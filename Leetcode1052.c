int maxSatisfied(int* customers, int customersSize, int* grumpy, int grumpySize, int minutes) {
    int result = 0;
    int window = 0;
    int max = 0;
    int i;

    for (i = 0; i < grumpySize; i++) {
        if (grumpy[i] == 0)
            result += customers[i];
    }
    for (i = 0; i < minutes; i++) {
        if (grumpy[i] == 1)
            window += customers[i];
    }
    max = window;
    for (; i < grumpySize; i++) {
        if (grumpy[i - minutes] == 1)
            window -= customers[i - minutes];
        if (grumpy[i] == 1)
            window += customers[i];
        if (window > max)
            max = window;
    }
    return result + max;
}