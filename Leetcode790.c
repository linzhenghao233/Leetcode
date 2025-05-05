int numTilings(int n) {
    long arr[1002] = { 0 };
    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 2;

    for (int i = 3; i <= n; i++) {
        arr[i] = (arr[i - 1] * 2 + arr[i - 3]) % 1000000007;
    }

    return (int)arr[n];
}
/*
1,2,5,11,24,53,117
1,2,3,4 ,5 ,6 ,7
*/