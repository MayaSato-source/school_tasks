/*
 * キーボードから月(month)を入力し、1～12ならば、その月の日数を表示する
 * そうでなければ、"月は1～12で入力してください"と表示
 *（日数例：1月なら31日、4月なら30日）ただし、2月は28日とする
 * FileName : ex0611ar_days.c
 * Author   : 19YN0115 Maya Sato
 * Date     : 2019/09/09
 */
#include <stdio.h>

int main(void)
{
    int     month;
    int     days[] = {31, 28, 31, 30, 31, 30,
                      31, 31, 30, 31, 30, 31
    };
    
    printf("月を入力 : ");
    while (scanf("%d", &month) != EOF) {
        if (month == 1 || month == 2 || month == 3 || month == 4 || month == 5 || month == 6 || month == 7 || month == 8 || month == 9 || month == 10 || month == 11 || month == 12) {
            printf("%d月は%d日間\n", month/* 2 */, days[month - 1]/* 3 */);
        }
        else {
            printf("月は1～12で入力して下さい\n");
        }
        
        printf("\n");
        printf("月を入力 : ");
    }
    
    return 0;
}
/*
Z:\algo\ex06>ex0611ar_days
月を入力 : 1
1月は31日間

月を入力 : 2
2月は28日間

月を入力 : 3
3月は31日間

月を入力 : 4
4月は30日間

月を入力 : 5
5月は31日間

月を入力 : 6
6月は30日間

月を入力 : 7
7月は31日間

月を入力 : 8
8月は31日間

月を入力 : 9
9月は30日間

月を入力 : 10
10月は31日間

月を入力 : 11
11月は30日間

月を入力 : 12
12月は31日間

月を入力 : 13
月は1～12で入力して下さい

月を入力 : 0
月は1～12で入力して下さい

月を入力 : ^Z
 -- Press any key to exit (Input "c" to continue) --
*/