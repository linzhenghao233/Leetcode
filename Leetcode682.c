int calPoints(char** operations, int operationsSize) {
    int result = 0, j = 0;
    int* temp = (int*)calloc(operationsSize, sizeof(int));

    for (int i = 0; i < operationsSize; i++) {
        switch (operations[i][0]) {
        case '+':
            temp[j] = temp[j - 1] + temp[j - 2];
            result += temp[j];
            j++;
            break;
        case 'D':
            temp[j] = temp[j - 1] * 2;
            result += temp[j];
            j++;
            break;
        case 'C':
            result -= temp[j - 1];
            temp[j - 1] = 0;
            j--;
            break;
        default:
            if (operations[i][0] == '-') {
                for (int k = 1; operations[i][k] != '\0'; k++) {
                    temp[j] *= 10;
                    temp[j] += operations[i][k] - '0';
                }
                temp[j] = -temp[j];
            }
            else {
                for (int k = 0; operations[i][k] != '\0'; k++) {
                    temp[j] *= 10;
                    temp[j] += operations[i][k] - '0';
                }
            }
            result += temp[j];
            j++;
        }
    }
    free(temp);
    return result;
}