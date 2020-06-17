/*
 * int配列内のデータをソートする　選択法
 *
 * FileName : ex1101s_sort01.c
 * Author   : 19YN0115 Maya Sato
 * Date     : 2019/11/25
 */
#include <stdio.h>

void selection_sort(int a[], int n);    // 選択法による昇順ソート
void print_int_array(int a[], int n);

int main(void)
{
//  int a[] = {5, 4, 1, 8, 2};        // データパターン1
    int a[] = {28, 56, 43, 62, 93};   // データパターン2
    int n;

    n = sizeof a  /  sizeof a[0];    // 配列の要素数を求める

    printf("ソート前");
    print_int_array(a, n);

    printf("ソート開始\n");
    selection_sort(a, n);      // 選択法によるソート関数の呼出し
    printf("ソート終了\n");

    printf("ソート後");
    print_int_array(a, n);

    return 0;
}

/*
 *  int型配列を選択法により昇順ソートする
 *  void selection_sort(int a[], int n)
 *  引数    int a[]     ソートする配列
 *          int n       データ数
 *  戻り値  void        なし
 */
void selection_sort(int a[], int n)
{
    int head;       // 最小値を格納する場所の添字（未整列データの先頭の添字）[head]～[n ? 1]が未整列
    int min_idx;    // 未成列データ内の最小値を示す添字
    int i, temp;
    int cnt = 1;

    head = 0;   // 未整列データの先頭を0とする  (全て未整列）
    while ( head < n - 1 ) {  // headを先頭からデータの最後の1つ前までずらす
        printf("第%2d回目", cnt++);     // 途中経過表示
        print_int_array(a, n);
        min_idx = head;         // 仮に未整列データ内の「先頭データ」を最小値とする
        for (i = head + 1; i < n; i++) { // 未整列データ内から最小値を見つける
            if (a[i] < a[min_idx]) {
                min_idx = i;
            }
        }
        if (head != min_idx) {           // 未整列データの先頭が最小値で無ければ
            temp       = a[head];         //  先頭データと最小値を交換
            a[head]    = a[min_idx];
            a[min_idx] = temp;
        }
        printf("        ");     // 空白8個
        print_int_array(a, n);  // 途中経過表示
        head++; // 未整列領域の先頭をひとつ後ろにずらす
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
ソート前   5   4   1   8   2
ソート開始
第 1回目   5   4   1   8   2
           1   4   5   8   2
第 2回目   1   4   5   8   2
           1   2   5   8   4
第 3回目   1   2   5   8   4
           1   2   4   8   5
第 4回目   1   2   4   8   5
           1   2   4   5   8
ソート終了
ソート後   1   2   4   5   8

ソート前  28  56  43  62  93
ソート開始
第 1回目  28  56  43  62  93
          28  56  43  62  93
第 2回目  28  56  43  62  93
          28  43  56  62  93
第 3回目  28  43  56  62  93
          28  43  56  62  93
第 4回目  28  43  56  62  93
          28  43  56  62  93
ソート終了
ソート後  28  43  56  62  93
*/