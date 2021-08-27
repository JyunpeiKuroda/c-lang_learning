#include <stdio.h>
#include <math.h>  // 計算関連(sin, cos, tan等)のライブラリが入っている。

#define PI 3.14    //マクロ。定数。PIの文字列は3.14と認識するようにコンパイラーに指示。

void main() {
	int angle;
	double rad;
	printf("角度を入力してください(0～360):");
	scanf("%d", &angle);

	//  角度をラジアンに変換
	rad = PI * (double)angle / 180.0;

	//  三角関数での計算
	printf("sin(%d)=%f\n", angle, sin(rad));
	printf("cos(%d)=%f\n", angle, cos(rad));
	printf("tan(%d)=%f\n", angle, tan(rad));
}