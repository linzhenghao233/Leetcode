int accountBalanceAfterPurchase(int purchaseAmount) {
    int result = 100 - purchaseAmount;
    int flag = result % 10;
    result /= 10;
    result *= 10;

    if (flag > 5)
        result += 10;

    return result;
}