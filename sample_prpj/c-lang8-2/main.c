#include <stdio.h>
#include <math.h>  // �v�Z�֘A(sin, cos, tan��)�̃��C�u�����������Ă���B

#define PI 3.14    //�}�N���B�萔�BPI�̕������3.14�ƔF������悤�ɃR���p�C���[�Ɏw���B

void main() {
	int angle;
	double rad;
	printf("�p�x����͂��Ă�������(0�`360):");
	scanf("%d", &angle);

	//  �p�x�����W�A���ɕϊ�
	rad = PI * (double)angle / 180.0;

	//  �O�p�֐��ł̌v�Z
	printf("sin(%d)=%f\n", angle, sin(rad));
	printf("cos(%d)=%f\n", angle, cos(rad));
	printf("tan(%d)=%f\n", angle, tan(rad));
}