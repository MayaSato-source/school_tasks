/*
 * �z��f�[�^�̍��v�A���ϕ\��
 * File Name : ex0606ar_sumavg.c
 * Author   : 19YN0115 Maya Sato
 * Date     : 2019/07/22
 */
#include <stdio.h>

int main(void)
{
    int     a[] = {70, 55, 80, 11, 95, 30, 50, 40, 100, 15};
    int     size  = sizeof a  /  sizeof a[0];
    int     sum;
    double  avg;
    int     i;
	
	size  = sizeof a / sizeof a[0]/* 1 */;
	
	sum = 0;	
    for (i = 0; i < size/* 2 */; i++) {		
         sum += a[i];
    }

    avg = (double)sum / size/* 4 */;
	
	printf("�v�f�� = %d\n", size);
    printf("���v   = %d\n", sum);
    printf("����   = %.1f\n", avg);

    return 0;
}

/*

Z:\algo\ex06>ex0606ar_sumavg
�v�f�� = 10
���v   = 546
����   = 54.6
 -- Press any key to exit (Input "c" to continue) --
*/