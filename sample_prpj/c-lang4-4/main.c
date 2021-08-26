#include <stdio.h>

//  iを用いたループ
void main() {
    int i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);    //  処理を実行してから条件式に入る
    printf("\n");
}