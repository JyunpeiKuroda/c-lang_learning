#include <stdio.h>

void main() {
	//  ポインタをNULLで初期化。
	int* p = NULL;
	//  アドレスを指定しないまま値を代入異常終了する
	*p = 1;
}