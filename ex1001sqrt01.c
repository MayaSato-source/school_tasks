/*
 * 標準関数の使い方
 *  平方根(√)を返すsqrt関数
 *  Author  : 19YN0115  Maya Sato
 *  Date    : 2019/12/16
 *  FileName:ex1001sqrt01.c
 */
#include <stdio.h>
// #include <math.h>       // sqrt関数を使うために必要

int main(void)
{
    double  data;
    double  result;

    printf("Input Data : ");
    scanf("%lf", &data);

    result = sqrt(data);     // num の平方根を求める
    printf("sqrt(%.1f) ---> %f\n", data, result);


    result = sqrt(2.0);       // 2 の平方根を求める
    printf("sqrt(2.0) ---> %f\n", result);

    return 0;
}
/*
C:\MinGW>a
Input Data : 3
sqrt(3.0) ---> 1.732051
sqrt(2.0) ---> 1.414214

C:\MinGW>a
Input Data : 9
sqrt(9.0) ---> 3.000000
sqrt(2.0) ---> 1.414214
*/