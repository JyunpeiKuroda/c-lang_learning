#include <stdio.h>

void main() {
    //  �T�C�Y3�̔z��ϐ��̐錾
    double d[4];
    double sum, avg; //  ���v�l�A���ϒl������ϐ�
    int i;
    //  �l����
    d[0] = 1.2;
    d[1] = 3.7;
    d[2] = 4.1;
    d[3] = 2.0;
    sum = 0.0;
    for (i = 0; i < 4; i++) {
        printf("%f ", d[i]);
        sum += d[i];
    }
    printf("\n");
    avg = sum / 4.0;            //  ���ϒl�̌v�Z
    printf("���v�l�F%f\n", sum);
    printf("���ϒl�F%f\n", avg);
}