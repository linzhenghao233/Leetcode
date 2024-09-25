bool isPerfectSquare(int num) {
    int left = 1;
    int right = num;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        int temp = num / mid;

        if (temp > mid)
            left = mid + 1;
        else if (temp < mid)
            right = mid - 1;
        else {
            if (num % mid == 0)
                return true;
            return false;
        }
    }

    return false;
}