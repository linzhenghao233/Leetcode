uint32_t reverseBits(uint32_t n) {
    uint32_t num = pow(2, 32);
    uint32_t result = 0;
    uint8_t j = 0;

    for (int i = n - 1; i >= 0; i--) {
        uint32_t temp = n & ((uint32_t)0x01 << j);
        result += temp * num;
        num /= 2;
        j++;
    }
    return result;
}