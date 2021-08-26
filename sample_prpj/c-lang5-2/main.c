#include <stdio.h>

void main()
{
    int n[] = { 5,4,3,2,1,0 };
    int i;
    //  forの繰り返しにi<6が宣言しているint n[]の配列のより多いと、実行エラーになる。
    for (i = 0; i < 6; i++) {
        printf("n[%d]=%d ", i, n[i]);
    }
    printf("\n");
}