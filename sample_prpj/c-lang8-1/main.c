#include <stdio.h>
#include <stdlib.h>
#include <time.h>    //time�֐����g�����߂ɁB

void main() {
	int a, b;
	// �����̏�����
	srand((unsigned)time(NULL));
	//srand(0);
	//    �P����P�O�܂ł̗����𔭐�������
	a = rand() % 10 + 1;
	b = rand() % 10 + 1;
	//    �v�Z���ʂ��o��
	printf("%d + %d = %d\n", a, b, a + b);
}