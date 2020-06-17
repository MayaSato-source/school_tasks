/*
 * �z��ւ̃f�[�^���͂�EOF(Ctrl + z[Enter])�����͂����܂ŌJ��Ԃ��A
 * ���͌����Ɠ��̓f�[�^�̕\�����s��
 * File Name : ex0615eof_avg.c
 * Author   : 19YN0115 Maya Sato
 * Date     : 2020/03/01
 */
#include <stdio.h>

int main(void)
{
    int     a[100];  // �[���ȗ]�T���������Ĕz����`
    int     n;
    int     i;
    int     size;
    int     sum;
    double  ave;

    n = 0;
    printf("�������� : ");
    while (scanf("%d", &a[n]) != EOF) {   // EOF�`�F�b�N 
        sum += a[n] ;
        n++;
        printf("�������� : ");
    }
    printf("\n");
    printf("���͌��� : %d\n", n);           // ���͌����̕\��
    
    for (i = 0; i < n; i++) {
        printf("a[%d] = %d\n", i, a[i]);    // �z��̓��e�\��
    }
    
    if (n != 0) {
        ave = (double)sum / n;
        printf("���v : %d\n", sum);
        printf("���� : %.2f\n", ave);
    }
        
    return 0;
}
/*
�������� : �������� : �������� : �������� : �������� : 
���͌��� : 4
a[0] = 5
a[1] = 9
a[2] = 6
a[3] = 3
���v : 23
���� : 5.75

�������� : �������� : �������� : �������� : �������� : �������� : 
���͌��� : 5
a[0] = -5
a[1] = -23
a[2] = -101
a[3] = -200
a[4] = 28
���v : -301
���� : -60.20

�������� : 
���͌��� : 0
*/