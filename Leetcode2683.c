bool doesValidArrayExist(int* derived, int derivedSize) {
    int flag = 0;

    for (int i = 0; i < derivedSize; i++)
        flag ^= derived[i];

    return flag == 0;
}