#include <stdio.h>

void main() {
	//  16�i��
	unsigned char i = 0xf;  //  2�i���F00001111
	unsigned char j = 0xff; //  2�i���F11111111
	printf("%x << 1 = %x\n", i, i << 1);          //  1�r�b�g���V�t�g�F 2�i���F00011110 = 0x1e
	printf("%x >> 1 = %x\n", i, i >> 1);          //  1�r�b�g�E�V�t�g�F 2�i���F00000111 = 0x7
	printf("%x | %x = %x\n", i, j, i | j);         //  OR���Z  �F 2�i���F11111111 = 0xff
	printf("%x & %x = %x\n", i, j, i & j);         //  AND���Z �F 2�i���F00001111 = 0xf
	printf("~%x = %x\n", i, (unsigned char)~i);   //  NOT���Z �F 2�i���F11110000 = 0xf0
}