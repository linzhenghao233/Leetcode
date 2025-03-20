int minCost(char* colors, int* neededTime, int neededTimeSize) {
    int result = 0;
    int left = 0;
    int right = 0;
    int max = 0;
    int cnt = 0;

    while (right < neededTimeSize) {
        if (colors[left] == colors[right]) {
            cnt += neededTime[right];
            max = neededTime[right] > max ? neededTime[right] : max;
            right++;
        }
        else {
            result += cnt - max;
            left = right;
            cnt = 0;
            max = 0;
        }
    }

    result += cnt - max;
    return result;
}