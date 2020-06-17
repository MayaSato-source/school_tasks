/*
 * 文字列用関数の利用　文字列の長さを調べるstrlen
 * FileName :ex1002strlen.c
 */
#include <stdio.h>
#include <string.h>     // 文字列関数利用時必要

int main(void)
{
    char names[][20] = {       // 文字列の配列
        "suzuki",
        "aoki",
        "abe",
        "saitou"
    };
    int linesize;
    int len;
    int i;

    linesize = sizeof names / sizeof names[0];
    printf("データ数 = %d\n", linesize);
    for (i = 0; i < linesize; i++) {
        len = strlen(names[i]);   // strlen 関数を使って文字列の長さを調べる
        printf("names[%d] = \"%s\" \t文字列の長さ = %d\n", i, names[i], len);
    }
    return 0;
}
/*
C:\MinGW>a
データ数 = 4
names[0] = "suzuki"     文字列の長さ = 6
names[1] = "aoki"       文字列の長さ = 4
names[2] = "abe"        文字列の長さ = 3
names[3] = "saitou"     文字列の長さ = 6
*/