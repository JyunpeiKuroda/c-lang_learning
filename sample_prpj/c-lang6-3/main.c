#include <stdio.h>

//�v���g�^�C�v�錾
int min(int, int);
int max(int, int);
void show(int);
void line();

void main() {
    int n1 = 4, n2 = 5;
    line();
    show(n1);
    show(n2);
    printf("��̐��̂����A�傫�����́A%d�ł��B\n", max(n1, n2));
    printf("��̐��̂����A���������́A%d�ł��B\n", min(n1, n2));
    line();
}

//  2�̐����̂����ő�l�����߂�֐�
int max(int a, int b)
{
    if (a > b) {
        return a;
    }
    return b;
}

// �Q�̐����̂����ŏ��l�����߂�֐�
int min(int a, int b)
{
    if (a < b) {
        return a;
    }
    return b;
}

//  ���l��\������֐�
void show(int n)
{
    printf("���l�F%d\n", n);
    return;
}
void line()
{
    printf("*********\n");
}