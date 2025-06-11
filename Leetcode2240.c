long long waysToBuyPensPencils(int total, int cost1, int cost2) {
    long long num = total / cost1 + 1;
    long long result = num;

    for (int i = 0; i < num; i++) {
        result += (total - cost1 * i) / cost2;
    }

    return result;
}