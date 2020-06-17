/*
 * int配列内のデータをソートする　交換法（バブルソート）
 *
 * FileName : ex1102b_sort01.c
 * Author   : 19YN0115 Maya Sato
 * Date     : 2019/12/25
 */
#include <stdio.h>

void print_int_array(int a[], int n);
void selected_sort(int a[], int n);
void bubble_sort1(int a[], int n);

int main(void)
{
    int a[] = {93, 56, 62, 43, 28};
//  int a[] = {28, 56, 43, 62, 93};
    int n;

    n = sizeof a  /  sizeof a[0];    // 配列の要素数を求める

    printf("ソート前");
    print_int_array(a, n);

    bubble_sort1(a, n);          //　交換法によるソート関数1の呼出し

    printf("ソート後");
    print_int_array(a, n);

    return 0;
}

/*
 *  int型配列を交換法により昇順ソートする
 *  void bubble_sort1(int a[], int n)
 *  引数    int a[]     ソートする配列
 *          int n       データ数
 *  戻り値  void        なし
 */
void bubble_sort1(int a[], int n)
{
    int tail;    // 未整列領域のの末尾を示す添字（[0]～[tail]が未整列）
    int i;
    int temp;
    int cnt = 1;

    tail = n - 1;         // 未整列領域の末尾位置の添字を設定
    while (tail > 0) {    // tailを先頭の1つ後ろまでずらす
        printf("第%2d回目", cnt++);
        print_int_array(a, n);      // 途中経過表示
        for (i = 0; i < tail; i++) {
            if (a[i] > a[i + 1]) {  // 隣り合ったデータの比較
                temp      = a[i];      // データ交換
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
            printf("\t");           // 空白8個の代わりにタブコード出力
            print_int_array(a, n);  // 途中経過表示
        }
        printf("\n");

        tail--;     // 未整列領域の末尾をひとつ前にずらす
    }

    return ;
}
/*
 *int配列の内容を n 件出力する関数
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
ソート前  93  56  62  43  28
第 1回目  93  56  62  43  28
	  56  93  62  43  28
	  56  62  93  43  28
	  56  62  43  93  28
	  56  62  43  28  93

第 2回目  56  62  43  28  93
	  56  62  43  28  93
	  56  43  62  28  93
	  56  43  28  62  93

第 3回目  56  43  28  62  93
	  43  56  28  62  93
	  43  28  56  62  93

第 4回目  43  28  56  62  93
	  28  43  56  62  93

ソート後  28  43  56  62  93



ソート前  28  56  43  62  93
第 1回目  28  56  43  62  93
	  28  56  43  62  93
	  28  43  56  62  93
	  28  43  56  62  93
	  28  43  56  62  93

第 2回目  28  43  56  62  93
	  28  43  56  62  93
	  28  43  56  62  93
	  28  43  56  62  93

第 3回目  28  43  56  62  93
	  28  43  56  62  93
	  28  43  56  62  93

第 4回目  28  43  56  62  93
	  28  43  56  62  93

ソート後  28  43  56  62  93
*/