/*
 * ������p�֐��̗��p�@������̒����𒲂ׂ�strlen
 * FileName :ex1002strlen.c
 */
#include <stdio.h>
#include <string.h>     // ������֐����p���K�v

int main(void)
{
    char names[][20] = {       // ������̔z��
        "suzuki",
        "aoki",
        "abe",
        "saitou"
    };
    int linesize;
    int len;
    int i;

    linesize = sizeof names / sizeof names[0];
    printf("�f�[�^�� = %d\n", linesize);
    for (i = 0; i < linesize; i++) {
        len = strlen(names[i]);   // strlen �֐����g���ĕ�����̒����𒲂ׂ�
        printf("names[%d] = \"%s\" \t������̒��� = %d\n", i, names[i], len);
    }
    return 0;
}
/*
C:\MinGW>a
�f�[�^�� = 4
names[0] = "suzuki"     ������̒��� = 6
names[1] = "aoki"       ������̒��� = 4
names[2] = "abe"        ������̒��� = 3
names[3] = "saitou"     ������̒��� = 6
*/