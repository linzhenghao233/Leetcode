#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int len;
    int result, temp;

    scanf("%d", &len);
    int* arr = (int*)malloc(len * sizeof(int));
    for (int index = 0; index < len; index++)
        scanf("%d", &arr[index]);

    result = arr[0];
    temp = arr[0];
    for (int i = 1; i < len; i++) {
        temp = (temp + arr[i]) > arr[i] ? (temp + arr[i]) : arr[i];

        if (temp > result)
            result = temp;
    }
    printf("%d\n", result);

    free(arr);
    return 0;
}