/*
 * 配列データ内の最小値を表示
 * File Name : ex0607ar_min.c
 * Author   : 19YN0115 Maya Sato
 * Date     : 2019/09/09
 */
#include <stdio.h>

int main(void)
{
//  int     a[] = {70, 55, 80, 13, 95, 30, 50, 40, 100, 15};
//  int     a[] = {12, 55, 80, 13, 95, 30, 50, 40, 100, 15, 70};
	int     a[] = {12, 55, 80, 13, 95, 30, 50, 40, 10};
    int     size;
    int     min;
    int     i;

    size  = sizeof a / sizeof a[0]/* 1 */;
    
    min = a[0];     // 先頭データを最小値の初期値とする
    for (i = 1/* 2 */; i < size; i++) {    // a[1]から比較するため、添え字の初期値を1とする
        if (min > a[i]/* 3 */) {
            min = a[i]/* 4 */;
        }
    }

    printf("要素数 = %d\n", size);
    printf("最小値 = %d\n", min);

    return 0;
}

/*

Z:\algo\ex06>ex0607ar_min
要素数 = 10
最小値 = 13
 -- Press any key to exit (Input "c" to continue) --
 
Z:\algo\ex06>ex0607ar_min
要素数 = 11
最小値 = 12
 -- Press any key to exit (Input "c" to continue) --

Z:\algo\ex06>ex0607ar_min
要素数 = 9
最小値 = 10
 -- Press any key to exit (Input "c" to continue) -- 
*/