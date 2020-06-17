/*
 * �v�f��8��1�����z��Ɏ��̂悤�ɏ���������i�[����Ă���2�i��
 * (�ŉ��ʃr�b�g��[0]�v�f�Ɋi�[)��10�i���ɕϊ����ĕ\������ 
 * FileName : ex0618bin2dec1.c
 * Author   : 19YN0115 Maya Sato
 * Date     : 2019/07/22
 */
#include <stdio.h>

int main(void)
{
//  int bin[] = {1, 0, 1, 1, 0, 0, 0, 0};   //  13
//  int bin[] = {1, 0, 1, 0, 1, 0, 1, 0};   //  85
//  int bin[] = {1, 1, 1, 1, 1, 1, 1, 1};   // 255
//  int bin[] = {0, 1, 0, 1, 0, 1, 0, 1};   // 170
	int bin[] = {1, 1, 1, 1, 1, 1, 1, 0};   // 127
    int size;
    int dec;
    int weight;   // 2�i���̌��̏d��(1, 2, 4, 8 ... �ƕω�������)
    int i;

    size   = sizeof bin / sizeof bin[0];      // �z��̗v�f�������߂�

    // 2�i���f�[�^����10�i���ɕϊ��A�\��
    dec    = 0;
    weight = 1;                         // 2�i���̌��̏d��
    for (i = 0; i < size; i++) {
        dec += bin[i] * weight;         // �z����̃f�[�^��2�i���̌��̏d�݂��|����10�i���ɕϊ�
        weight *= 2/*  2  */;               // 2�i���̌��̏d�݂����̒l��
    }

    // 2�i���f�[�^�̕\��
    printf("2�i�� = ");
    for (i = size - 1/*  3  */; i >= 0/*   4   */; i --/* 5 */) {
        printf("%d", bin[i]);           // bin�z��̓��e�����Ԃɕ\��
    }
    printf("  10�i��[%3d]\n", dec);     // �ϊ����ꂽ10�i����\��

    return 0;
}
/*
Z:\algo\ex06>ex0618bin2dec1
2�i�� = 00001101  10�i��[ 13]

Z:\algo\ex06>ex0618bin2dec1
2�i�� = 01010101  10�i��[ 85]

Z:\algo\ex06>ex0618bin2dec1
2�i�� = 11111111  10�i��[255]

Z:\algo\ex06>ex0618bin2dec1
2�i�� = 10101010  10�i��[170]

Z:\algo\ex06>ex0618bin2dec1
2�i�� = 01111111  10�i��[127]
*/