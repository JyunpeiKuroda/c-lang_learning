#include "showResult.h"
#include <stdio.h>  //print�֐��g���Ă邩��K�v

extern int ans;  // extern�̈Ӗ��͑��̃t�@�C��(calc.c)�Œ�`���ꂽglobal�ϐ����g�p�ł���悤�ɐ錾

void showAnswer() {
    printf("%d\n", ans);
}