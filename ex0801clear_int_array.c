/*
 * �z�񏈗��̊֐���
 * int�z����̃f�[�^���w�茏�[���N���A���鏈�����֐���
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
    
    size = sizeof a  /  sizeof a[0];    // �z��̗v�f�������߂�
    
    printf("�v�f�� = %d\n", size);
/*    
	for (i = 0; i < size; i++) {
      a[i] = 0;
	}
    
*/	
	clear_int_array(a, size);
    printf("��������");
    print_int_array(a, size);
    
	return 0;
}
/*
 *  int�^�z��̃[���N���A���s��
 *  void clear_int_array(int a[], int n)
 *  ����    int a[]     ����������z��
 *          int n       ����������f�[�^��
 *  �߂�l  void        �Ȃ�
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
 *int�z��̓��e n ���o�͊֐�
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
Z:\algo\ex08>ex0801clear_int_array
�v�f�� = 5
��������   0   0   0   0   0
 -- Press any key to exit (Input "c" to continue) -- 
 */
