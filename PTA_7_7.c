#include <stdio.h>

int main(void) {
    int x, y;
    long long result = 1;
    int base;
    int mod = 1000;

    scanf("%d %d", &x, &y);
    base = x % mod;
    while (y) {
        if (y & 1)
            result = (result * base) % mod;
        y >>= 1;
        base = (base * base) % mod;
    }
    printf("%lld", result);

    return 0;
}