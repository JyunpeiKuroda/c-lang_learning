#include <stdio.h>
#include <stdlib.h>
#include <time.h>    //time関数を使うために。

void main() {
	int a, b;
	// 乱数の初期化
	srand((unsigned)time(NULL));
	//srand(0);
	//    １から１０までの乱数を発生させる
	a = rand() % 10 + 1;
	b = rand() % 10 + 1;
	//    計算結果を出力
	printf("%d + %d = %d\n", a, b, a + b);
}