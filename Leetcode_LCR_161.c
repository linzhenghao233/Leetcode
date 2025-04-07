int maxSales(int* sales, int salesSize) {
    int result = sales[0];
    int temp = sales[0];

    for (int i = 1; i < salesSize; i++) {
        if (temp + sales[i] > sales[i])
            temp = temp + sales[i];
        else
            temp = sales[i];
        if (temp > result)
            result = temp;
    }

    return result;
}