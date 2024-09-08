#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, target;

    scanf("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &target);

    int left = 0;
    int right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] < target)
            left = mid + 1;
        else if (arr[mid] > target)
            right = mid - 1;
        else {
            printf("%d", mid);
            break;
        }
    }

    free(arr);
    return 0;
}