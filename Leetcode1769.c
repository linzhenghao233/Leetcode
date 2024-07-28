/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* minOperations(char* boxes, int* returnSize) {
    int len = strlen(boxes);
    int* tail = (int*)calloc(len + 1, sizeof(int));
    int* front = (int*)calloc(len, sizeof(int));
    int* result = (int*)calloc(len, sizeof(int));
    int count = 0;

    for (int i = len; i > 0; i--) {
        if (boxes[i] == '1')
            count++;
        tail[i - 1] = tail[i] + count;
    }

    count = 0;
    for (int i = 1; i < len; i++) {
        if (boxes[i - 1] == '1')
            count++;
        front[i] = front[i - 1] + count;
    }

    for (int i = 0; i < len; i++)
        result[i] = front[i] + tail[i];

    *returnSize = len;
    free(tail);
    free(front);
    return result;
}