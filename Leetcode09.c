#include <stdbool.h>
bool isPalindrome(int x) {
    if (x < 0)
        return false;
    else if (x < 10)
        return true;
    else {
        int count = 0;
        int temp = x;
        while (temp > 0) {
            temp /= 10;
            count++;
        }
        int* arr1 = (int*)malloc(count * sizeof(int));
        temp = x;
        for (int i = count - 1; i >= 0; i--) {
            arr1[i] = temp % 10;
            temp /= 10;
        }
        for (int i = 0; i < count / 2; i++) {
            if (arr1[i] != arr1[count - 1 - i])
                return false;
        }
        return true;
    }
}