int equalSubstring(char* s, char* t, int maxCost) {
    int len = strlen(s);
    int left = 0;
    int right = 0;
    int cost = 0;

    while (right < len) {
        cost += abs(s[right] - t[right]);

        if (cost > maxCost) {
            cost -= abs(s[left] - t[left]);
            left++;
        }

        right++;
    }

    return len - left;
}