/*
 * �|�C���^�����̗��K
 *
 *  Author  : 19YN0115  Maya Sato
 *  Date    : 2019/11/12
 *  FileName: ex1201ptrarg.c
*/
#include <stdio.h>

void func(int *pa);

int main(void)
{
	int a = 10;

	printf("main : &a = %p   a = %d\n", &a, a);

    func(&a);   // �ϐ�a�̃A�h���X��n��

	printf("main : &a = %p   a = %d\n", &a, a);

	return 0;
}

void func(int *pa)  // int�ϐ��̃A�h���X���󂯎��
{
	     printf("func : pa = %p *pa = %d\n", pa, *pa);     // �Ăяo�����̒l��\��

	     *pa = 30;   // �Ăяo�����̒l��ύX
}
/*
Z:\algo\ex12>ex1201ptrarg
main : &a = 0019FF48   a = 10
func : pa = 0019FF48 *pa = 10
main : &a = 0019FF48   a = 30
 -- Press any key to exit (Input "c" to continue) --
*/