// �w�b�_�t�@�C���̓ǂݍ���
#include <stdio.h>

void main() {
    //1 %s�ŃX�g�����O(string�^)�̕�����B%d�Ńf�V�}��(decimal�^)�̐����B
	//2 %c�̓`���[(char�^)�̕���1�o�C�g�B
	//3 %f�̓t���[�g(float�^)�̕��������_
	//�@��\n(�G�X�P�[�v�V�[�P���X) = �o�b�N�X���b�V��n�Ɠ����ŉ��s�����B

	//1
	printf("����ɂ��́B���̖��O��%s�ł��B\n�N���%d�ł��B\n", "�R�c���Y", 20);
	//2
	printf("�C�j�V�����́A%c�ł��B\n", 'Y');
	//3
	printf("%f + %f = %f\n", 1.2, 2.7, 1.2 + 2.7);
}