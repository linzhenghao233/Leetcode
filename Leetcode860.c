bool lemonadeChange(int* bills, int billsSize) {
    int* money = (int*)calloc(2, sizeof(int));

    for (int i = 0; i < billsSize; i++) {
        switch (bills[i]) {
        case 5: money[0]++; break;
        case 10:
            if (money[0] < 1)
                return false;
            else
                money[0]--;
            money[1]++;
            break;
        case 20:
            if (money[1] > 0 && money[0] > 0) {
                money[1]--;
                money[0]--;
            }
            else if (money[0] >= 3)
                money[0] -= 3;
            else
                return false;
        }
    }
    free(money);
    return true;
}