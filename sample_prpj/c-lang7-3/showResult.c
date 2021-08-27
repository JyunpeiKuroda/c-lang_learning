#include "showResult.h"
#include <stdio.h>  //print関数使ってるから必要

extern int ans;  // externの意味は他のファイル(calc.c)で定義されたglobal変数を使用できるように宣言

void showAnswer() {
    printf("%d\n", ans);
}