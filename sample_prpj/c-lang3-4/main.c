#include <stdio.h>

void main()
{
    int dice;
    //  �T�C�R���̖ڂ����
    printf("1����6�̐��l����͂��Ă�������:");
    scanf("%d", &dice);
    //  �l���A�T�C�R���̖ڂ͈͓̔����ǂ����𒲂ׂ�
    if (1 <= dice && dice <= 6) {
        //  ��������̖ڂ��A�������A����ŁA�����𕪂���B
        if (dice == 2 || dice == 4 || dice == 6) {
            printf("���i�`���E�j�ł��B\n");  //  �����Ȃ�Β��i�`���E�j
        }
        else {
            printf("���i�n���j�ł��B\n");   //  ��Ȃ�Δ��i�n���j
        }
    }
    else {
        printf("�͈͊O�̐��l�ł��B\n");
    }
}