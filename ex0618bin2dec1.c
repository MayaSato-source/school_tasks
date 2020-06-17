/*
 * 要素数8の1次元配列に次のように初期化され格納されている2進数
 * (最下位ビットを[0]要素に格納)を10進数に変換して表示する 
 * FileName : ex0618bin2dec1.c
 * Author   : 19YN0115 Maya Sato
 * Date     : 2019/07/22
 */
#include <stdio.h>

int main(void)
{
//  int bin[] = {1, 0, 1, 1, 0, 0, 0, 0};   //  13
//  int bin[] = {1, 0, 1, 0, 1, 0, 1, 0};   //  85
//  int bin[] = {1, 1, 1, 1, 1, 1, 1, 1};   // 255
//  int bin[] = {0, 1, 0, 1, 0, 1, 0, 1};   // 170
	int bin[] = {1, 1, 1, 1, 1, 1, 1, 0};   // 127
    int size;
    int dec;
    int weight;   // 2進数の桁の重み(1, 2, 4, 8 ... と変化させる)
    int i;

    size   = sizeof bin / sizeof bin[0];      // 配列の要素数を求める

    // 2進数データから10進数に変換、表示
    dec    = 0;
    weight = 1;                         // 2進数の桁の重み
    for (i = 0; i < size; i++) {
        dec += bin[i] * weight;         // 配列内のデータに2進数の桁の重みを掛けて10進数に変換
        weight *= 2/*  2  */;               // 2進数の桁の重みを次の値に
    }

    // 2進数データの表示
    printf("2進数 = ");
    for (i = size - 1/*  3  */; i >= 0/*   4   */; i --/* 5 */) {
        printf("%d", bin[i]);           // bin配列の内容を順番に表示
    }
    printf("  10進数[%3d]\n", dec);     // 変換された10進数を表示

    return 0;
}
/*
Z:\algo\ex06>ex0618bin2dec1
2進数 = 00001101  10進数[ 13]

Z:\algo\ex06>ex0618bin2dec1
2進数 = 01010101  10進数[ 85]

Z:\algo\ex06>ex0618bin2dec1
2進数 = 11111111  10進数[255]

Z:\algo\ex06>ex0618bin2dec1
2進数 = 10101010  10進数[170]

Z:\algo\ex06>ex0618bin2dec1
2進数 = 01111111  10進数[127]
*/