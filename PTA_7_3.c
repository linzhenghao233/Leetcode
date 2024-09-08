#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int main(void) {
    int n, k;
    int flag = 1;

    scanf("%d %d", &n, &k);
    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    qsort(arr, n, sizeof(int), cmp);

    printf("%d", arr[k - 1]);

    free(arr);
    return 0;
}