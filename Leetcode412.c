/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    char** result = (char**)malloc(n * sizeof(char*));

    for (int i = 1; i <= n; i++) {
        if (!(i % 15)) {
            result[i - 1] = (char*)malloc(9 * sizeof(char));
            strcpy(result[i - 1], "FizzBuzz");
        }
        else if (!(i % 3)) {
            result[i - 1] = (char*)malloc(5 * sizeof(char));
            strcpy(result[i - 1], "Fizz");
        }
        else if (!(i % 5)) {
            result[i - 1] = (char*)malloc(5 * sizeof(char));
            strcpy(result[i - 1], "Buzz");
        }
        else {
            result[i - 1] = (char*)malloc(6 * sizeof(char));
            sprintf(result[i - 1], "%d", i);
        }
    }

    *returnSize = n;
    return result;
}