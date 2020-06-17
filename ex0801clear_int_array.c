/*
 * 配列処理の関数化
 * int配列内のデータを指定件ゼロクリアする処理を関数化
 *
 * FileName : ex0801clear_int_array.c
 * Author   : 19YN0115 Maya Sato
 * Date     : 2019/09/02
 */

#include <stdio.h>

void print_int_array(int a[], int n);
void clear_int_array(int a[], int n);

int main(void) 
{
    int a[5];
    int size;
    int i;
    
    size = sizeof a  /  sizeof a[0];    // 配列の要素数を求める
    
    printf("要素数 = %d\n", size);
/*    
	for (i = 0; i < size; i++) {
      a[i] = 0;
	}
    
*/	
	clear_int_array(a, size);
    printf("初期化後");
    print_int_array(a, size);
    
	return 0;
}
/*
 *  int型配列のゼロクリアを行う
 *  void clear_int_array(int a[], int n)
 *  引数    int a[]     初期化する配列
 *          int n       初期化するデータ数
 *  戻り値  void        なし
 */
 
	void clear_int_array(int a[], int n)
	{
		int i;
		
    for (i = 0; i < n; i++) {
        printf("%4d", a[i]);
    }
    printf("\n");

    return ;
}

/* 
 *int配列の内容 n 件出力関数
 *  void print_int_array(int a[], int n)
 *  引数    int     a[]     : データ配列
 *          int     n       : データ件数
 *  戻り値  void            : なし
 */  
void print_int_array(int a[], int n) 
{
    int i;
    
    for (i = 0; i < n; i++) {
        printf("%4d", a[i]);
    }
    printf("\n");

    return ;
}
/*
Z:\algo\ex08>ex0801clear_int_array
要素数 = 5
初期化後   0   0   0   0   0
 -- Press any key to exit (Input "c" to continue) -- 
 */
