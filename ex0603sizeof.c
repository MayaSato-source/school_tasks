/*
 * 配列の大きさを調べる sizeof 演算子の使い方
 * FileName : ex603sizeof.c
 * Author   : 19YN0115 Maya Sato
 * Date     : 2019/07/22
 */
#include <stdio.h>

int main(void)
{
//  int a[] = {5, 9, 6, 3};     // 初期値4個の配列宣言　配列の要素数は指定しない
// 	int a[] = {5, 9};           // 初期値2個の配列宣言　配列の要素数は指定しない
	int a[] = {5, 9, 6, 3, 4};  // 初期値5個の配列宣言　配列の要素数は指定しない
    int i;
    int size;

    printf("sizeof(int) = %d\n", sizeof(int));  // データ型は()で囲む必要あり
    printf("sizeof a[0] = %d\n", sizeof a[0]);  // 変数は()で囲む必要無し
    printf("sizeof a    = %d\n", sizeof a);     // sizeof配列名　は配列全体の大きさ

    size = sizeof a / sizeof a[0]/* 1 */;            // 配列の要素数を求める
    printf("要素数 = %d\n", size);

    for (i = 0; i < size; i++) {                // 配列の要素数回の繰り返し
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}
/*
Z:\algo\ex06>ex0603sizeof
sizeof(int) = 4
sizeof a[0] = 4
sizeof a    = 16
要素数 = 4
a[0] = 5
a[1] = 9
a[2] = 6
a[3] = 3
 -- Press any key to exit (Input "c" to continue) --

Z:\algo\ex06>ex0603sizeof
sizeof(int) = 4
sizeof a[0] = 4
sizeof a    = 8
要素数 = 2
a[0] = 5
a[1] = 9
 -- Press any key to exit (Input "c" to continue) --
 
Z:\algo\ex06>ex0603sizeof
sizeof(int) = 4
sizeof a[0] = 4
sizeof a    = 20
要素数 = 5
a[0] = 5
a[1] = 9
a[2] = 6
a[3] = 3
a[4] = 4
 -- Press any key to exit (Input "c" to continue) -- 
*/