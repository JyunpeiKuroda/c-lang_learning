#include <stdio.h>

//  �O���[�o���ϐ�
int global = 10;

//�v���g�^�C�v�錾
void func1(double, int);
void func2();

void main() {
    double a = 123.41;
    int b = 100;
    printf("main������\n");
    printf("global=%d\n", global);
    printf("a=%f b=%d\n", a, b);
    printf("******************\n");
    // func1���Ăяo��
    func1(3.1, 4);
    // func2���Ăяo��
    func2();
}

//  func1
void func1(double a, int b)
{
    printf("func1������\n");
    printf("global=%d\n", global);
    printf("a=%f b=%d\n", a, b);
    printf("******************\n");
}
//  func2
void func2()
{
    double a = -4.1;
    int b = 2;
    printf("func2������\n");
    printf("global=%d\n", global);
    printf("a=%f b=%d\n", a, b);
    printf("******************\n");
}