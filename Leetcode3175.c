int findWinningPlayer(int* skills, int skillsSize, int k) {
    int count = 0;
    int result = 0;

    for (int i = 1; i < skillsSize; i++) {
        if (skills[result] > skills[i])
            count++;
        else {
            count = 1;
            result = i;
        }

        if (count == k)
            return result;
    }

    return result;
}