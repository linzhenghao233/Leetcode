int timeRequiredToBuy(int* tickets, int ticketsSize, int k) {
    int result = 0;

    for (int i = 0; i < ticketsSize; i++) {
        if (tickets[i] >= tickets[k]) {
            if (i <= k)
                result += tickets[k];
            else
                result += tickets[k] - 1;
        }
        else
            result += tickets[i];
    }

    return result;
}