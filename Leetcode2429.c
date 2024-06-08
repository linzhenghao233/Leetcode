int minimizeXor(int num1, int num2) {
    int count_num1 = 0, count_num2 = 0;
    int gap;

    for (int bit = 0; bit < 32; bit++) {
        if (num1 & (1U << bit))
            count_num1++;
        if (num2 & (1U << bit))
            count_num2++;
    }

    gap = count_num1 - count_num2;
    if (gap < 0) {
        for (int bit = 0; bit < 32 && gap != 0; bit++) {
            if (!(num1 & (1U << bit))) {
                num1 |= (1U << bit);
                gap++;
            }
        }
    }
    else if (gap > 0) {
        for (int bit = 0; bit < 32 && gap != 0; bit++) {
            if (num1 & (1U << bit)) {
                num1 &= ~(1U << bit);
                gap--;
            }
        }
    }

    return num1;
}