/*
 * バブルソート
 *  整列済みの部分は再比較を行わないようにする
 * FileName : ex1103b_sort02.c
 * Date     : 2019/12/14
 */
#include <stdio.h>

void print_int_array(int a[], int n);
void bubble_sort(int a[], int n);        // バブルソート（効率化）

int main(void)
{
//  int a[] = {93, 56, 62, 43, 28};  // パターン1
//	int a[] = {28, 56, 43, 62, 93};  // パターン2
    int a[] = {10, 20, 30, 40, 50};  // パターン3
    int n;

    n = sizeof a  /  sizeof a[0];    // 配列の要素数を求める

    printf("ソート前");
    print_int_array(a, n);

    bubble_sort(a, n);  // バブルソート関数の呼出し

    printf("ソート後");
    print_int_array(a, n);

    return 0;
}

/*
 *  int型配列を交換法により昇順ソートする
 *     途中でソート完了した場合は途中終了する
 *  void bubble_sort(int a[], int n)
 *  引数    int a[]     ソートする配列
 *          int n       データ数
 *  戻り値  void        なし
 */
void bubble_sort(int a[], int n)
{
    int tail;       // 未整列領域の末尾を指す添字(a[0]～a[tail]が未整列）
    int i;          // a[i]とa[i + 1]を比較交換して行く
    int last_swap;  // 最後に交換が行われた添字
    int temp;
    int cnt = 1;

    tail = n - 1 ;  // tail の初期化（最後の添字を設定）
    while (tail > 0) {
        printf("第%2d回目", cnt++);
        print_int_array(a, n);      // 途中経過表示
        last_swap = 0;  // last_swapの初期化(整列済みとなった場合のtailの値)
        for (i = 0; i < tail; i++) {    // 先頭からtailの前まで
            if (a[i] > a[i + 1]) {      // 隣り合ったデータの比較
                temp = a[i];            // 交換
                a[i] = a[i + 1];
                a[i + 1] = temp;

                last_swap = i;  // last_sawpの更新
            }
            printf("\t");           // 空白8個の代わりにタブコード出力
            print_int_array(a, n);  // 途中経過表示
        }
        printf("\n");

        tail = last_swap;       // 未整列領域の末尾を最後に交換が行われた添字に更新
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

ソート後  28  43  56  62  93

ソート前  10  20  30  40  50
第 1回目  10  20  30  40  50
	  10  20  30  40  50
	  10  20  30  40  50
	  10  20  30  40  50
	  10  20  30  40  50

ソート後  10  20  30  40  50
*/