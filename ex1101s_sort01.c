/*
 * int�z����̃f�[�^���\�[�g����@�I��@
 *
 * FileName : ex1101s_sort01.c
 * Author   : 19YN0115 Maya Sato
 * Date     : 2019/11/25
 */
#include <stdio.h>

void selection_sort(int a[], int n);    // �I��@�ɂ�鏸���\�[�g
void print_int_array(int a[], int n);

int main(void)
{
//  int a[] = {5, 4, 1, 8, 2};        // �f�[�^�p�^�[��1
    int a[] = {28, 56, 43, 62, 93};   // �f�[�^�p�^�[��2
    int n;

    n = sizeof a  /  sizeof a[0];    // �z��̗v�f�������߂�

    printf("�\�[�g�O");
    print_int_array(a, n);

    printf("�\�[�g�J�n\n");
    selection_sort(a, n);      // �I��@�ɂ��\�[�g�֐��̌ďo��
    printf("�\�[�g�I��\n");

    printf("�\�[�g��");
    print_int_array(a, n);

    return 0;
}

/*
 *  int�^�z���I��@�ɂ�菸���\�[�g����
 *  void selection_sort(int a[], int n)
 *  ����    int a[]     �\�[�g����z��
 *          int n       �f�[�^��
 *  �߂�l  void        �Ȃ�
 */
void selection_sort(int a[], int n)
{
    int head;       // �ŏ��l���i�[����ꏊ�̓Y���i������f�[�^�̐擪�̓Y���j[head]�`[n ? 1]��������
    int min_idx;    // ������f�[�^���̍ŏ��l�������Y��
    int i, temp;
    int cnt = 1;

    head = 0;   // ������f�[�^�̐擪��0�Ƃ���  (�S�Ė�����j
    while ( head < n - 1 ) {  // head��擪����f�[�^�̍Ō��1�O�܂ł��炷
        printf("��%2d���", cnt++);     // �r���o�ߕ\��
        print_int_array(a, n);
        min_idx = head;         // ���ɖ�����f�[�^���́u�擪�f�[�^�v���ŏ��l�Ƃ���
        for (i = head + 1; i < n; i++) { // ������f�[�^������ŏ��l��������
            if (a[i] < a[min_idx]) {
                min_idx = i;
            }
        }
        if (head != min_idx) {           // ������f�[�^�̐擪���ŏ��l�Ŗ������
            temp       = a[head];         //  �擪�f�[�^�ƍŏ��l������
            a[head]    = a[min_idx];
            a[min_idx] = temp;
        }
        printf("        ");     // ��8��
        print_int_array(a, n);  // �r���o�ߕ\��
        head++; // ������̈�̐擪���ЂƂ��ɂ��炷
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
�\�[�g�O   5   4   1   8   2
�\�[�g�J�n
�� 1���   5   4   1   8   2
           1   4   5   8   2
�� 2���   1   4   5   8   2
           1   2   5   8   4
�� 3���   1   2   5   8   4
           1   2   4   8   5
�� 4���   1   2   4   8   5
           1   2   4   5   8
�\�[�g�I��
�\�[�g��   1   2   4   5   8

�\�[�g�O  28  56  43  62  93
�\�[�g�J�n
�� 1���  28  56  43  62  93
          28  56  43  62  93
�� 2���  28  56  43  62  93
          28  43  56  62  93
�� 3���  28  43  56  62  93
          28  43  56  62  93
�� 4���  28  43  56  62  93
          28  43  56  62  93
�\�[�g�I��
�\�[�g��  28  43  56  62  93
*/