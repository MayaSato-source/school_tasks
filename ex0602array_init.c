/*
 * 要素数4の配列を次の様に初期化し出力する
 * File Name : ex0602array_init.c
 * Author    : 19YN0115 Maya Sato
 * Date      : 2019/07/08
 */
#include <stdio.h>

int main(void)
{
//  int     a[4] = {5, 9, 6, 3};   // 要素数4の配列宣言と初期化
	int     a[4] = {5, 9};   // 要素数4の配列宣言と初期化
//  int     a[4] = {5, 9, 6, 3, 4};   // 要素数4の配列宣言と初期化
    int     i;

    for (i = 0; i < 4/* 1 */; i++) {
        printf("a[%d] = %d\n", i, a[i]/* 2 */);
    }

    return 0;
}
/*

Z:\algo\ex06>ex0602array_init
a[0] = 5
a[1] = 9
a[2] = 6
a[3] = 3

Z:\algo\ex06>


Z:\algo\ex06>ex0602array_init
a[0] = 5
a[1] = 9
a[2] = 0
a[3] = 0

Z:\algo\ex06>


ex0602array_init.c:
エラー E2225 ex0602array_init.c 13: 初期化子が多すぎる(関数 main )
*** 1 errors in Compile ***
*/