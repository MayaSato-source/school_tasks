/*
 * 2次元配列の初期化と表示
 * FileName : ex0701print2dim.c
 * Author   : 19YN0115 Maya Sato
 * Date     : 2019/07/22
 */
#include <stdio.h>

int main(void)
{
/* この行の先頭が /* ならばコメントの始まり。 // ならば1行コメント
    int ar2[3][4] = {          // 3行4列の2次元配列の宣言と初期化
        { 5,  9,  6,  3 },
        { 2,  1,  8,  4 },
        {17, 20, 35, 49 }
    };
//*/
/*
    int ar2[3][4] = {          // 3行4列の2次元配列の宣言と初期化
        { 5, 9 },               //列数より少ない初期値の行
        { 2, 1, 8, 4 }
    };                          // 行数より少ない列数
//*/
//*
    int ar2[][4] = {          // 行数を省略した宣言(列数を省略するとエラー)
        { 5, 9, 6, 3 },
        { 2, 1, 8, 4 }
    };
//*/

    int i, j;
    int line_size, col_size;

    line_size = sizeof ar2 / sizeof ar2[0];     // 行数 = 配列全体サイズ   / 配列1行のサイズ
    col_size  = sizeof ar2[0] / sizeof ar2[0][0] ;     // 列数 = 配列1行のサイズ / 配列一要素のサイズ

    printf("行数 = %d\n", line_size);
    printf("列数 = %d\n", col_size);

    for (i = 0; i < line_size/* 4 */; i++) {
        for (j = 0; j < col_size/* 5 */; j++) {
            printf("%5d", ar2[i][j]/* 6 */);
        }
        printf("\n");
    }

    return 0;
}
/*
Z:\algo\ex07>ex0701print2dim
行数 = 3
列数 = 4
    5    9    6    3
    2    1    8    4
   17   20   35   49
   
Z:\algo\ex07>ex0701print2dim
行数 = 3
列数 = 4
    5    9    0    0
    2    1    8    4
    0    0    0    0

Z:\algo\ex07>ex0701print2dim
行数 = 2
列数 = 4
    5    9    6    3
    2    1    8    4
*/