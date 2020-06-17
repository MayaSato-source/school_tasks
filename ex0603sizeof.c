/*
 * �z��̑傫���𒲂ׂ� sizeof ���Z�q�̎g����
 * FileName : ex603sizeof.c
 * Author   : 19YN0115 Maya Sato
 * Date     : 2019/07/22
 */
#include <stdio.h>

int main(void)
{
//  int a[] = {5, 9, 6, 3};     // �����l4�̔z��錾�@�z��̗v�f���͎w�肵�Ȃ�
// 	int a[] = {5, 9};           // �����l2�̔z��錾�@�z��̗v�f���͎w�肵�Ȃ�
	int a[] = {5, 9, 6, 3, 4};  // �����l5�̔z��錾�@�z��̗v�f���͎w�肵�Ȃ�
    int i;
    int size;

    printf("sizeof(int) = %d\n", sizeof(int));  // �f�[�^�^��()�ň͂ޕK�v����
    printf("sizeof a[0] = %d\n", sizeof a[0]);  // �ϐ���()�ň͂ޕK�v����
    printf("sizeof a    = %d\n", sizeof a);     // sizeof�z�񖼁@�͔z��S�̂̑傫��

    size = sizeof a / sizeof a[0]/* 1 */;            // �z��̗v�f�������߂�
    printf("�v�f�� = %d\n", size);

    for (i = 0; i < size; i++) {                // �z��̗v�f����̌J��Ԃ�
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}
/*
Z:\algo\ex06>ex0603sizeof
sizeof(int) = 4
sizeof a[0] = 4
sizeof a    = 16
�v�f�� = 4
a[0] = 5
a[1] = 9
a[2] = 6
a[3] = 3
 -- Press any key to exit (Input "c" to continue) --

Z:\algo\ex06>ex0603sizeof
sizeof(int) = 4
sizeof a[0] = 4
sizeof a    = 8
�v�f�� = 2
a[0] = 5
a[1] = 9
 -- Press any key to exit (Input "c" to continue) --
 
Z:\algo\ex06>ex0603sizeof
sizeof(int) = 4
sizeof a[0] = 4
sizeof a    = 20
�v�f�� = 5
a[0] = 5
a[1] = 9
a[2] = 6
a[3] = 3
a[4] = 4
 -- Press any key to exit (Input "c" to continue) -- 
*/