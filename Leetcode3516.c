int findClosest(int x, int y, int z) {
    int num1 = abs(x - z);
    int num2 = abs(y - z);

    if (num1 < num2)
        return 1;
    else if (num1 > num2)
        return 2;
    else
        return 0;
}