#include <stdio.h>

//  i��p�������[�v
void main() {
    int i, num;
    printf("�񐔂���́F");
    scanf("%d", &num);   //  �L�[�{�[�h���烋�[�v�̉񐔂����
    printf("\n");

     //  while���[�v�Ŏ��s
    printf("while�Ŏ��s\n");
    i = 1;
    while (i <= num) {
        printf("*");
        i++;
    }
    printf("\n\n");

    //  do�`while���[�v�Ŏ��s
    printf("do�`while�Ŏ��s\n");
    i = 1;
    do {
        printf("*");
        i++;
    } while (i <= num);
    printf("\n");
}