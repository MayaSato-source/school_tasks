/*
 * 文字列用関数の利用　文字列の比較を行うstrcmp
 * 　文字列配列内のデータ探索を線形探索で行う
 * FileName : ex1003strcmp.c
 * Author   : 19YN0115 Maya Sato
 * Date     : 2020/02/28
 */
#include <stdio.h>
#include <string.h>

void print_str_array(char names[][20], int n);
int  str_ssearch1(char name[], char names[][20], int n);

int main(void)
{
    char names[][20] = {    // 探索対象文字列配列
        "suzuki",
        "aoki",
        "abe",
        "saitou"
    };
    char name[20];
    int linesize;
    int result;

    linesize = sizeof names / sizeof names[0];
    printf("データ数 = %d\n", linesize);
    print_str_array(names, linesize);      // 文字列配列を表示

    printf("Enter name : ");
    while (gets(name)) {
        result = str_ssearch1(name, names, linesize);      // 線形探索で文字列を探索する
        if (result >= 0) {
            printf("[%s] : %d番目に見つかりました\n", name, result);
        }
        else {
            printf("[%s] : 見つかりませんでした\n", name);
        }
        printf("Enter name : ");
    }

    return 0;
}
/*
 * 文字列探索をシーケンシャルサーチで行う
 * int str_ssearch1(char name[], char names[][20], int n)
 *  引数    char name           探索値
 *          char names[][20]    探索対象配列
 *          int n               データ数
 *  戻り値  int                 見つかった場合       添字の値 0～(n - 1)
 *                              見つからなかった場合 -1
 */
int str_ssearch1(char name[], char names[][20], int n)
{
    int i;

    i = 0;
    while (i < n  && strcmp(name, names[i]) != 0) {
        i++;
    }

    if (i == n) {   // 見つからなかったら
        i = -1;              // 失敗を設定
    }
    return i;
}
/*
* 文字列配列のn件出力
* void print_str_array(char names[][20], int n)
*  引数    char names[][20]   表示対象配列
*          int  n             表示件数
*  戻り値  void               なし
*/
void print_str_array(char names[][20], int n)
{
    int i;

    for (i = 0; i < n; i++) {
        printf("\"%s\"\n", names[i]);
    }

    return ;
}
/*
データ数 = 4
"suzuki"
"aoki"
"abe"
"saitou"
Enter name : [suzuki] : 0番目に見つかりました
Enter name : [aoki] : 1番目に見つかりました
Enter name : [saitou] : 3番目に見つかりました
Enter name : [abe] : 2番目に見つかりました
Enter name : [tanaka] : 見つかりませんでした
Enter name : [watanabe] : 見つかりませんでした
Enter name : [SUZUKI] : 見つかりませんでした
Enter name : [Aoki] : 見つかりませんでした
Enter name : [^Z] : 見つかりませんでした
*/
