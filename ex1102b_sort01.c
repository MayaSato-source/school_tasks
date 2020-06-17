/*
 * int�z����̃f�[�^���\�[�g����@�����@�i�o�u���\�[�g�j
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

    n = sizeof a  /  sizeof a[0];    // �z��̗v�f�������߂�

    printf("�\�[�g�O");
    print_int_array(a, n);

    bubble_sort1(a, n);          //�@�����@�ɂ��\�[�g�֐�1�̌ďo��

    printf("�\�[�g��");
    print_int_array(a, n);

    return 0;
}

/*
 *  int�^�z��������@�ɂ�菸���\�[�g����
 *  void bubble_sort1(int a[], int n)
 *  ����    int a[]     �\�[�g����z��
 *          int n       �f�[�^��
 *  �߂�l  void        �Ȃ�
 */
void bubble_sort1(int a[], int n)
{
    int tail;    // ������̈�̖̂����������Y���i[0]�`[tail]��������j
    int i;
    int temp;
    int cnt = 1;

    tail = n - 1;         // ������̈�̖����ʒu�̓Y����ݒ�
    while (tail > 0) {    // tail��擪��1���܂ł��炷
        printf("��%2d���", cnt++);
        print_int_array(a, n);      // �r���o�ߕ\��
        for (i = 0; i < tail; i++) {
            if (a[i] > a[i + 1]) {  // �ׂ荇�����f�[�^�̔�r
                temp      = a[i];      // �f�[�^����
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
            printf("\t");           // ��8�̑���Ƀ^�u�R�[�h�o��
            print_int_array(a, n);  // �r���o�ߕ\��
        }
        printf("\n");

        tail--;     // ������̈�̖������ЂƂO�ɂ��炷
    }

    return ;
}
/*
 *int�z��̓��e�� n ���o�͂���֐�
 *  void print_int_array(int a[], int n)
 *  ����    int     a[]     : �f�[�^�z��
 *          int     n       : �f�[�^����
 *  �߂�l  void            : �Ȃ�
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
�\�[�g�O  93  56  62  43  28
�� 1���  93  56  62  43  28
	  56  93  62  43  28
	  56  62  93  43  28
	  56  62  43  93  28
	  56  62  43  28  93

�� 2���  56  62  43  28  93
	  56  62  43  28  93
	  56  43  62  28  93
	  56  43  28  62  93

�� 3���  56  43  28  62  93
	  43  56  28  62  93
	  43  28  56  62  93

�� 4���  43  28  56  62  93
	  28  43  56  62  93

�\�[�g��  28  43  56  62  93



�\�[�g�O  28  56  43  62  93
�� 1���  28  56  43  62  93
	  28  56  43  62  93
	  28  43  56  62  93
	  28  43  56  62  93
	  28  43  56  62  93

�� 2���  28  43  56  62  93
	  28  43  56  62  93
	  28  43  56  62  93
	  28  43  56  62  93

�� 3���  28  43  56  62  93
	  28  43  56  62  93
	  28  43  56  62  93

�� 4���  28  43  56  62  93
	  28  43  56  62  93

�\�[�g��  28  43  56  62  93
*/