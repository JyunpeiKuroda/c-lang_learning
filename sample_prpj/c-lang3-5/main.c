#include <stdio.h>

void main() {
    int num;
    printf("1�`3�̒l����͂��Ă��������F");
    //  �L�[�{�[�h���琮�������
    scanf("%d", &num);
    //  ���͂����l���A���̐����ǂ����𒲂ׂ�
    switch (num) {
    case 1:
        printf("one\n");    //  num��1�������ꍇ�̏���
        break;
    case 2:
        printf("two\n");    //  num��2�������ꍇ�̏��� 
        break;
    case 3:
        printf("three\n");  //  num��3�������ꍇ�̏��� 
        break;
    case 4:
        printf("four\n");  //  num��4�������ꍇ�̏���
        break;
    default:
        printf("�s�K�؂Ȓl�ł��B\n"); //  ����ȊO�̒l�����͂��ꂽ�ꍇ�̏���
        break;
    }
}