/*
 *  整数２つの値を交換する関数の作成
 *  Author  : 19YN0115 Maya Sato
 *  Date    : 2020/03/01
 *  FileName: ex1204swapint.c
 */
#include <stdio.h>

int input_int(int *pd);
void swap_int(int *pdata1, int *pdata2);

int main(void)
{
    int data1, data2;

    while (input_int(&data1) != EOF  && input_int(&data2) != EOF) {
        printf("**交換前**\n");
        printf("data1 = %d\n", data1);
        printf("data2 = %d\n", data2);

        swap_int(&data1, &data2);

        printf("**交換後**\n");
        printf("data1 = %d\n", data1);
        printf("data2 = %d\n", data2);
        printf("\n");
    }

    return 0;
}

/*
 *  intデータの交換を行う関数
 *  引数    int *pdata1 : データ１のアドレス
 *          int *pdata2 : データ２のアドレス
 *  戻り値  void        : なし
 */
void swap_int(int *pdata1, int *pdata2)
{
	int temp;
	temp = *pdata1;
	*pdata1 = *pdata2;
	*pdata2 = temp;
}

int input_int(int *pd)
{
    printf("Input num : ");
    return scanf("%d", pd);
}
/*
Input num : Input num : **交換前**
data1 = 10
data2 = 20
**交換後**
data1 = 20
data2 = 10

Input num : Input num : **交換前**
data1 = -10
data2 = 20
**交換後**
data1 = 20
data2 = -10
*/