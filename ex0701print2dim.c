/*
 * 2�����z��̏������ƕ\��
 * FileName : ex0701print2dim.c
 * Author   : 19YN0115 Maya Sato
 * Date     : 2019/07/22
 */
#include <stdio.h>

int main(void)
{
/* ���̍s�̐擪�� /* �Ȃ�΃R�����g�̎n�܂�B // �Ȃ��1�s�R�����g
    int ar2[3][4] = {          // 3�s4���2�����z��̐錾�Ə�����
        { 5,  9,  6,  3 },
        { 2,  1,  8,  4 },
        {17, 20, 35, 49 }
    };
//*/
/*
    int ar2[3][4] = {          // 3�s4���2�����z��̐錾�Ə�����
        { 5, 9 },               //�񐔂�菭�Ȃ������l�̍s
        { 2, 1, 8, 4 }
    };                          // �s����菭�Ȃ���
//*/
//*
    int ar2[][4] = {          // �s�����ȗ������錾(�񐔂��ȗ�����ƃG���[)
        { 5, 9, 6, 3 },
        { 2, 1, 8, 4 }
    };
//*/

    int i, j;
    int line_size, col_size;

    line_size = sizeof ar2 / sizeof ar2[0];     // �s�� = �z��S�̃T�C�Y   / �z��1�s�̃T�C�Y
    col_size  = sizeof ar2[0] / sizeof ar2[0][0] ;     // �� = �z��1�s�̃T�C�Y / �z���v�f�̃T�C�Y

    printf("�s�� = %d\n", line_size);
    printf("�� = %d\n", col_size);

    for (i = 0; i < line_size/* 4 */; i++) {
        for (j = 0; j < col_size/* 5 */; j++) {
            printf("%5d", ar2[i][j]/* 6 */);
        }
        printf("\n");
    }

    return 0;
}
/*
Z:\algo\ex07>ex0701print2dim
�s�� = 3
�� = 4
    5    9    6    3
    2    1    8    4
   17   20   35   49
   
Z:\algo\ex07>ex0701print2dim
�s�� = 3
�� = 4
    5    9    0    0
    2    1    8    4
    0    0    0    0

Z:\algo\ex07>ex0701print2dim
�s�� = 2
�� = 4
    5    9    6    3
    2    1    8    4
*/