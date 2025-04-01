long long mostPoints(int** questions, int questionsSize, int* questionsColSize) {
    long long* f = (long long*)calloc(questionsSize + 1, sizeof(long long));

    for (int i = 0; i < questionsSize; i++) {
        f[i + 1] = fmax(f[i + 1], f[i]);
        int j = fmin(i + questions[i][1] + 1, questionsSize);
        f[j] = fmax(f[j], f[i] + questions[i][0]);
    }

    long long result = f[questionsSize];
    free(f);
    return result;
}