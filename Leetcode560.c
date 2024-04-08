int subarraySum(int* nums, int numsSize, int k) {
    int result = 0;

    for (int i = 0; i < numsSize; i++) {
        int temp = 0;
        for (int j = i; j < numsSize; j++) {
            temp += nums[j];
            result += temp == k ? 1 : 0;
        }
    }
    return result;
}//ÔËĞĞ³¬Ê±