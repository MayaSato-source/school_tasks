/*
 * �z��f�[�^���̍ŏ��l��\��
 * File Name : ex0607ar_min.c
 * Author   : 19YN0115 Maya Sato
 * Date     : 2019/09/09
 */
#include <stdio.h>

int main(void)
{
//  int     a[] = {70, 55, 80, 13, 95, 30, 50, 40, 100, 15};
//  int     a[] = {12, 55, 80, 13, 95, 30, 50, 40, 100, 15, 70};
	int     a[] = {12, 55, 80, 13, 95, 30, 50, 40, 10};
    int     size;
    int     min;
    int     i;

    size  = sizeof a / sizeof a[0]/* 1 */;
    
    min = a[0];     // �擪�f�[�^���ŏ��l�̏����l�Ƃ���
    for (i = 1/* 2 */; i < size; i++) {    // a[1]�����r���邽�߁A�Y�����̏����l��1�Ƃ���
        if (min > a[i]/* 3 */) {
            min = a[i]/* 4 */;
        }
    }

    printf("�v�f�� = %d\n", size);
    printf("�ŏ��l = %d\n", min);

    return 0;
}

/*

Z:\algo\ex06>ex0607ar_min
�v�f�� = 10
�ŏ��l = 13
 -- Press any key to exit (Input "c" to continue) --
 
Z:\algo\ex06>ex0607ar_min
�v�f�� = 11
�ŏ��l = 12
 -- Press any key to exit (Input "c" to continue) --

Z:\algo\ex06>ex0607ar_min
�v�f�� = 9
�ŏ��l = 10
 -- Press any key to exit (Input "c" to continue) -- 
*/