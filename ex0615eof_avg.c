/*
 * 配列へのデータ入力をEOF(Ctrl + z[Enter])が入力されるまで繰り返し、
 * 入力件数と入力データの表示を行う
 * File Name : ex0615eof_avg.c
 * Author   : 19YN0115 Maya Sato
 * Date     : 2020/03/01
 */
#include <stdio.h>

int main(void)
{
    int     a[100];  // 充分な余裕を持たせて配列を定義
    int     n;
    int     i;
    int     size;
    int     sum;
    double  ave;

    n = 0;
    printf("整数入力 : ");
    while (scanf("%d", &a[n]) != EOF) {   // EOFチェック 
        sum += a[n] ;
        n++;
        printf("整数入力 : ");
    }
    printf("\n");
    printf("入力件数 : %d\n", n);           // 入力件数の表示
    
    for (i = 0; i < n; i++) {
        printf("a[%d] = %d\n", i, a[i]);    // 配列の内容表示
    }
    
    if (n != 0) {
        ave = (double)sum / n;
        printf("合計 : %d\n", sum);
        printf("平均 : %.2f\n", ave);
    }
        
    return 0;
}
/*
整数入力 : 整数入力 : 整数入力 : 整数入力 : 整数入力 : 
入力件数 : 4
a[0] = 5
a[1] = 9
a[2] = 6
a[3] = 3
合計 : 23
平均 : 5.75

整数入力 : 整数入力 : 整数入力 : 整数入力 : 整数入力 : 整数入力 : 
入力件数 : 5
a[0] = -5
a[1] = -23
a[2] = -101
a[3] = -200
a[4] = 28
合計 : -301
平均 : -60.20

整数入力 : 
入力件数 : 0
*/