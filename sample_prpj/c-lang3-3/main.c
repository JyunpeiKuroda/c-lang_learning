#include <stdio.h>

void main() {
    int num;
    printf("1�`4�̒l����͂��Ă��������F");
    //  �L�[�{�[�h���琮�������
    scanf("%d", &num);
    //  ���͂����l���A���̐����ǂ����𒲂ׂ�
    if (num == 1) {
        printf("one\n");    //  num��1�������ꍇ�̏���
    }
    else if (num == 2) {
        printf("two\n");    //  num��2�������ꍇ�̏��� 
    }
    else if (num == 3) {
        printf("three\n");  //  num��3�������ꍇ�̏��� 
    }
    else if (num == 4) {
        printf("four\n");   //  num��4�������ꍇ�̏���
    }
    else {
        printf("�s�K�؂Ȓl�ł��B\n"); //  ����ȊO�̒l�����͂��ꂽ�ꍇ�̏���
    }
}