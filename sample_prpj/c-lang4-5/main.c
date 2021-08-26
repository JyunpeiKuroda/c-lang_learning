#include <stdio.h>

//  iを用いたループ
void main() {
    int i, num;
    printf("回数を入力：");
    scanf("%d", &num);   //  キーボードからループの回数を入力
    printf("\n");

     //  whileループで実行
    printf("whileで実行\n");
    i = 1;
    while (i <= num) {
        printf("*");
        i++;
    }
    printf("\n\n");

    //  do～whileループで実行
    printf("do～whileで実行\n");
    i = 1;
    do {
        printf("*");
        i++;
    } while (i <= num);
    printf("\n");
}