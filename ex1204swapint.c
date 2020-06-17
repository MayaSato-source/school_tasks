/*
 *  �����Q�̒l����������֐��̍쐬
 *  Author  : 19YN0115 Maya Sato
 *  Date    : 2020/03/01
 *  FileName: ex1204swapint.c
 */
#include <stdio.h>

int input_int(int *pd);
void swap_int(int *pdata1, int *pdata2);

int main(void)
{
    int data1, data2;

    while (input_int(&data1) != EOF  && input_int(&data2) != EOF) {
        printf("**�����O**\n");
        printf("data1 = %d\n", data1);
        printf("data2 = %d\n", data2);

        swap_int(&data1, &data2);

        printf("**������**\n");
        printf("data1 = %d\n", data1);
        printf("data2 = %d\n", data2);
        printf("\n");
    }

    return 0;
}

/*
 *  int�f�[�^�̌������s���֐�
 *  ����    int *pdata1 : �f�[�^�P�̃A�h���X
 *          int *pdata2 : �f�[�^�Q�̃A�h���X
 *  �߂�l  void        : �Ȃ�
 */
void swap_int(int *pdata1, int *pdata2)
{
	int temp;
	temp = *pdata1;
	*pdata1 = *pdata2;
	*pdata2 = temp;
}

int input_int(int *pd)
{
    printf("Input num : ");
    return scanf("%d", pd);
}
/*
Input num : Input num : **�����O**
data1 = 10
data2 = 20
**������**
data1 = 20
data2 = 10

Input num : Input num : **�����O**
data1 = -10
data2 = 20
**������**
data1 = 20
data2 = -10
*/