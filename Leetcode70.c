//int climbStairs(int n) {
//    int sum = 1;
//    int two = 1;
//
//    while (2 * two <= n) {
//        unsigned long long dividend = 1;//分子
//        unsigned long long divisor = 1;//分母
//
//        for (int i = 0; i < two; i++) {
//            dividend *= (n - two - i);
//            divisor *= (two - i);
//        }
//        sum += dividend / divisor;
//        two++;
//    }
//
//    return sum;
//}
//阶乘加循环会溢出，用动态规划做
int climbStairs(int n) {
    int* function;
    int answer;

    function = (int*)malloc(46 * sizeof(int));
    function[0] = 1;
    function[1] = 1;

    if (n == 1)
        return 1;

    for (int i = 2; i <= n; i++)
        function[i] = function[i - 1] + function[i - 2];
    answer = function[n - 1] + function[n - 2];


    return answer;
}