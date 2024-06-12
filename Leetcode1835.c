int getXORSum(int* arr1, int arr1Size, int* arr2, int arr2Size) {
    int num1 = 0;
    int num2 = 0;

    for (int i = 0; i < arr1Size; i++)
        num1 ^= arr1[i];

    for (int i = 0; i < arr2Size; i++)
        num2 ^= arr2[i];

    return num1 & num2;
}