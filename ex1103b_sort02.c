/*
 * �o�u���\�[�g
 *  ����ς݂̕����͍Ĕ�r���s��Ȃ��悤�ɂ���
 * FileName : ex1103b_sort02.c
 * Date     : 2019/12/14
 */
#include <stdio.h>

void print_int_array(int a[], int n);
void bubble_sort(int a[], int n);        // �o�u���\�[�g�i�������j

int main(void)
{
//  int a[] = {93, 56, 62, 43, 28};  // �p�^�[��1
//	int a[] = {28, 56, 43, 62, 93};  // �p�^�[��2
    int a[] = {10, 20, 30, 40, 50};  // �p�^�[��3
    int n;

    n = sizeof a  /  sizeof a[0];    // �z��̗v�f�������߂�

    printf("�\�[�g�O");
    print_int_array(a, n);

    bubble_sort(a, n);  // �o�u���\�[�g�֐��̌ďo��

    printf("�\�[�g��");
    print_int_array(a, n);

    return 0;
}

/*
 *  int�^�z��������@�ɂ�菸���\�[�g����
 *     �r���Ń\�[�g���������ꍇ�͓r���I������
 *  void bubble_sort(int a[], int n)
 *  ����    int a[]     �\�[�g����z��
 *          int n       �f�[�^��
 *  �߂�l  void        �Ȃ�
 */
void bubble_sort(int a[], int n)
{
    int tail;       // ������̈�̖������w���Y��(a[0]�`a[tail]��������j
    int i;          // a[i]��a[i + 1]���r�������čs��
    int last_swap;  // �Ō�Ɍ������s��ꂽ�Y��
    int temp;
    int cnt = 1;

    tail = n - 1 ;  // tail �̏������i�Ō�̓Y����ݒ�j
    while (tail > 0) {
        printf("��%2d���", cnt++);
        print_int_array(a, n);      // �r���o�ߕ\��
        last_swap = 0;  // last_swap�̏�����(����ς݂ƂȂ����ꍇ��tail�̒l)
        for (i = 0; i < tail; i++) {    // �擪����tail�̑O�܂�
            if (a[i] > a[i + 1]) {      // �ׂ荇�����f�[�^�̔�r
                temp = a[i];            // ����
                a[i] = a[i + 1];
                a[i + 1] = temp;

                last_swap = i;  // last_sawp�̍X�V
            }
            printf("\t");           // ��8�̑���Ƀ^�u�R�[�h�o��
            print_int_array(a, n);  // �r���o�ߕ\��
        }
        printf("\n");

        tail = last_swap;       // ������̈�̖������Ō�Ɍ������s��ꂽ�Y���ɍX�V
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

�\�[�g��  28  43  56  62  93

�\�[�g�O  10  20  30  40  50
�� 1���  10  20  30  40  50
	  10  20  30  40  50
	  10  20  30  40  50
	  10  20  30  40  50
	  10  20  30  40  50

�\�[�g��  10  20  30  40  50
*/